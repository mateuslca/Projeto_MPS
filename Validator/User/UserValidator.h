#ifndef USERVALIDATOR_H
#define USERVALIDATOR_H

#include <string>
#include <stdexcept> 

class UserValidator{
    public:

    static bool validateEmail(const std::string& email);
    static bool validatePassword(const std::string& password);

};

#endif