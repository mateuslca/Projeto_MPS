#include "UserController.h"
#include "../../Validator/User/UserValidator.h"
#include <vector>
#include <iostream>
#include <stdexcept>

UserController::UserController(UserRepository userRepository) {
    this->userRepository = userRepository;
}

void UserController::addUser(std::string password, std::string email) {
    try {
        UserValidator::validateEmail(email);
        UserValidator::validatePassword(password);

        userRepository.addUser(User(getUsers().size(), password, email));
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
}

std::vector<User> UserController::getUsers() {
    return userRepository.getUsers();
}