#ifndef USER_VALIDATOR_H
#define USER_VALIDATOR_H

#include <string>
#include <stdexcept> 

class UserValidator {
    public:
        UserValidator();
        
        static void validateEmail(std::string email);
        static void validatePassword(std::string password);
};

#endif