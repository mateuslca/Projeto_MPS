#ifndef UPPERCASE_VALIDATOR_H
#define UPPERCASE_VALIDATOR_H

#include "PasswordValidator.h"
#include <stdexcept>

class UppercaseValidator : public PasswordValidator {
public:
    void validate(const std::string& password) override;
};

#endif // UPPERCASE_VALIDATOR_H
