#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int id;
    std::string name;
    std::string email;

public:
    User(int, std::string, std::string);

    int getID();
    std::string getName();
    std::string getEmail();

    void setName(std::string);
    void setEmail(std::string);
};

#endif