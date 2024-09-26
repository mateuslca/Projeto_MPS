#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int id;
    std::string name;
    std::string email;

public:
    User(int id, const std::string &name, const std::string &email)
        : id(id), name(name), email(email) {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getEmail() const { return email; }

    void setName(const std::string &newName) { name = newName; }
    void setEmail(const std::string &newEmail) { email = newEmail; }
};

#endif
