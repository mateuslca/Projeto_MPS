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

void UserValidator::validatePassword(std::string password){
    if(password.empty()) {
        throw std::invalid_argument("A senha não deve ser vazia");
    }

    if(password.length() < 8 || password.length() > 128) {
        throw std::invalid_argument("A senha deve ter entre 8 e 128 caracteres.");
    }

    bool isUpper = false, isLower = false, hasDigit = false, hasSpecial = false;
    std::string specialCharacters = "@$!%*?&#";

    for(char i : password) {
        if(std::isupper(i)) isUpper = true;
        if(std::islower(i)) isLower = true;
        if(std::isdigit(i)) hasDigit = true;
        if(specialCharacters.find(i) != std::string::npos) hasSpecial = true;
    }

    if(!isUpper) {
        throw std::invalid_argument("A senha deve conter pelo menos uma letra maiúscula.");
    }

    if(!isLower) {
        throw std::invalid_argument("A senha deve conter pelo menos uma letra minúscula.");
    }

    if(!hasDigit) {
        throw std::invalid_argument("A senha deve conter pelo menos um número.");
    }

    if(!hasSpecial) {
        throw std::invalid_argument("A senha deve conter pelo menos um caractere especial (@$!%*?&#).");
    }
};