#include "UppercaseValidator.h"

void UppercaseValidator::validate(const std::string& password) {
    bool hasUpper = false;
    for (char c : password) {
        if (std::isupper(c)) {
            hasUpper = true;
            break;
        }
    }
    if (!hasUpper) {
        throw std::invalid_argument("A senha deve conter pelo menos uma letra maiúscula.");
    }
    if (nextHandler) {
        nextHandler->validate(password);
    }
}
