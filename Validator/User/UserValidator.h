#ifndef USER_VALIDATOR_H
#define USER_VALIDATOR_H

#include <string>
#include <stdexcept> 

class UserValidator {
    public:
        UserValidator();
        
        static void validateLogin(std::string);
        static void validatePassword(std::string);
};

#endif