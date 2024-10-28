#include "SpecialCharValidator.h"

void SpecialCharValidator::validate(const std::string& password) {
    std::string specialCharacters = "@$!%*?&#";
    bool hasSpecial = false;

    for (char c : password) {
        if (specialCharacters.find(c) != std::string::npos) {
            hasSpecial = true;
            break;
        }
    }
    if (!hasSpecial) {
        throw std::invalid_argument("A senha deve conter pelo menos um caractere especial (@$!%*?&#).");
    }
    if (nextHandler) {
        nextHandler->validate(password);
    }
}
