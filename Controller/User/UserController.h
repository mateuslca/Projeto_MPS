#ifndef USER_CONTROLLER_H
#define USER_CONTROLLER_H

#include "../../Repository/User/UserRepository.h"

class UserController {
    private:
        UserRepository userRepository;

    public:
        UserController(UserRepository);

        void addUser(std::string, std::string);
        std::vector<User> getUsers();
};

#endif