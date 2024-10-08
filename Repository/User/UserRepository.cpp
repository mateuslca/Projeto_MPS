#include "UserRepository.h"
#include <vector>

UserRepository::UserRepository() {

}

void UserRepository::addUser(User user) {
    users.push_back(user);
}

std::vector<User> UserRepository::getUsers() {
    return users;
}