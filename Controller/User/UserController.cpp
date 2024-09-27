#include "UserController.h"
#include <vector>

UserController::UserController(UserRepository userRepository) {
    this->userRepository = userRepository;
}

void UserController::addUser(std::string name, std::string email) {
    userRepository.addUser(User(getUsers().size(), name, email));
}

std::vector<User> UserController::getUsers() {
    return userRepository.getUsers();
}