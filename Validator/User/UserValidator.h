#ifndef USER_VALIDATOR_H
#define USER_VALIDATOR_H

#include <string>
#include <stdexcept> 
#include "LengthValidator.h"
#include "UppercaseValidator.h"
#include "LowercaseValidator.h"
#include "DigitValidator.h"
#include "SpecialCharValidator.h"

class UserValidator {
    public:
        UserValidator();
        
        static void validateLogin(std::string);
        static void validatePassword(std::string& password);
};

#endif