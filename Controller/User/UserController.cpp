#include "UserController.h"
#include "UserValidator.cpp"
#include <vector>

UserController::UserController(UserRepository userRepository) {
    this->userRepository = userRepository;
}

void UserController::addUser(std::string password, std::string email) {
    UserValidator::validateEmail(email);
    UserValidator::validatePassword(password);
    userRepository.addUser(User(getUsers().size(), password, email)); 
}

std::vector<User> UserController::getUsers() {
    return userRepository.getUsers();
}