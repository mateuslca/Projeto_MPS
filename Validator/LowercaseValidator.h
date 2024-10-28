#ifndef LOWERCASE_VALIDATOR_H
#define LOWERCASE_VALIDATOR_H

#include "PasswordValidator.h"
#include <stdexcept>

class LowercaseValidator : public PasswordValidator {
public:
    void validate(const std::string& password) override;
};

#endif // LOWERCASE_VALIDATOR_H
