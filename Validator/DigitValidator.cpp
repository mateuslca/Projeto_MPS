#include "DigitValidator.h"

void DigitValidator::validate(const std::string& password) {
    bool hasDigit = false;
    for (char c : password) {
        if (std::isdigit(c)) {
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        throw std::invalid_argument("A senha deve conter pelo menos um número.");
    }
    if (nextHandler) {
        nextHandler->validate(password);
    }
}
