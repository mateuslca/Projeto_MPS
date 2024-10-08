#ifndef USER_REPOSITORY_H
#define USER_REPOSITORY_H

#include "../../Entity/User/User.h"
#include <vector>

class UserRepository {
    private:
        std::vector<User> users;

    public:
        UserRepository();

        void addUser(User user);
        std::vector<User> getUsers();
};

#endif