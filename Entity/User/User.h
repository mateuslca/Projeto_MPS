#ifndef USER_H
#define USER_H

#include <string>
 
class User {
private:
    int id;
    std::string login;
    std::string password;

public:
    User(int, std::string, std::string);

    int getID();
    std::string getPassword();
    std::string getLogin();

    void setPassword(std::string);
    void setLogin(std::string);
};

#endif