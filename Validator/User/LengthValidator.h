#ifndef LENGTH_VALIDATOR_H
#define LENGTH_VALIDATOR_H

#include "PasswordValidator.h"
#include <stdexcept>

class LengthValidator : public PasswordValidator {
public:
    void validate(const std::string& password) override;
};

#endif // LENGTH_VALIDATOR_H
