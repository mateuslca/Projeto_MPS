#ifndef PASSWORD_VALIDATOR_H
#define PASSWORD_VALIDATOR_H

#include <string>

class PasswordValidator {
protected:
    PasswordValidator* nextHandler;

public:
    PasswordValidator() : nextHandler(nullptr) {}
    virtual ~PasswordValidator() {}

    void setNextHandler(PasswordValidator* handler) {
        nextHandler = handler;
    }

    virtual void validate(const std::string& password) = 0;
};

#endif // PASSWORD_VALIDATOR_H
