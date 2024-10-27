#include "UserRepository.h"

UserRepository::UserRepository() {
}

void UserRepository::addUser(const User& user) {
    users.push_back(user); 
}

std::vector<User> UserRepository::getUsers() const {
    return users;
}
