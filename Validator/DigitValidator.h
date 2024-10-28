#ifndef DIGIT_VALIDATOR_H
#define DIGIT_VALIDATOR_H

#include "PasswordValidator.h"
#include <stdexcept>

class DigitValidator : public PasswordValidator {
public:
    void validate(const std::string& password) override;
};

#endif // DIGIT_VALIDATOR_H
