#include "LengthValidator.h"

void LengthValidator::validate(const std::string& password) {
    if (password.length() < 8 || password.length() > 128) {
        throw std::invalid_argument("A senha deve ter entre 8 e 128 caracteres.");
    }
    if (nextHandler) {
        nextHandler->validate(password);
    }
}
