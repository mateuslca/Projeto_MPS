#include "UserValidator.h"

UserValidator::UserValidator() {

}

void UserValidator::validateLogin(std::string login) {
    if(login.empty()) {
        throw std::invalid_argument("O email não deve ser vazio");
    }

    if(login.length() > 12) {
        throw std::invalid_argument("O email deve ter no máximo 12 caracteres");
    }

    for(char letter : login) {
        if (std::isdigit(letter)){
            throw std::invalid_argument("O email não deve conter números");
        }
    }
}

void UserValidator::validatePassword(std::string& password) {
    // Create validators
    LengthValidator lengthValidator;
    UppercaseValidator uppercaseValidator;
    LowercaseValidator lowercaseValidator;
    DigitValidator digitValidator;
    SpecialCharValidator specialCharValidator;

    // Set up the chain of responsibility
    lengthValidator.setNextHandler(&uppercaseValidator);
    uppercaseValidator.setNextHandler(&lowercaseValidator);
    lowercaseValidator.setNextHandler(&digitValidator);
    digitValidator.setNextHandler(&specialCharValidator);

    // Validate password using the chain
    lengthValidator.validate(password);
}