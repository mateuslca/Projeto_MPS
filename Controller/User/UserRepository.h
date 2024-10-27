#ifndef USER_REPOSITORY_H
#define USER_REPOSITORY_H

#include "../../Entity/User/User.h"
#include <vector>

class UserRepository {
private:
    std::vector<User> users;

public:
    UserRepository();

    virtual void addUser(const User& user); // Adicione 'virtual'
    virtual std::vector<User> getUsers() const; // Adicione 'virtual' e 'const'
};

#endif // USER_REPOSITORY_H

