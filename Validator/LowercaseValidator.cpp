#include "LowercaseValidator.h"

void LowercaseValidator::validate(const std::string& password) {
    bool hasLower = false;
    for (char c : password) {
        if (std::islower(c)) {
            hasLower = true;
            break;
        }
    }
    if (!hasLower) {
        throw std::invalid_argument("A senha deve conter pelo menos uma letra minúscula.");
    }
    if (nextHandler) {
        nextHandler->validate(password);
    }
}
