#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int id;
    std::string email;
    std::string password;

public:
    User(int, std::string, std::string);

    int getID();
    std::string getPassword();
    std::string getEmail();

    void setPassword(std::string);
    void setEmail(std::string);
};

#endif