#ifndef SPECIAL_CHAR_VALIDATOR_H
#define SPECIAL_CHAR_VALIDATOR_H

#include "PasswordValidator.h"
#include <stdexcept>

class SpecialCharValidator : public PasswordValidator {
public:
    void validate(const std::string& password) override;
};

#endif // SPECIAL_CHAR_VALIDATOR_H
