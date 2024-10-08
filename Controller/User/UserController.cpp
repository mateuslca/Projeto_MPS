#include "UserController.h"
#include "../../Validator/User/UserValidator.h"
#include <vector>
#include <iostream>
#include <stdexcept>

UserController::UserController(UserRepository userRepository) {
    this->userRepository = userRepository;
}

void UserController::addUser(std::string login, std::string password) {
    try {
        UserValidator::validateLogin(login);
        UserValidator::validatePassword(password);

        userRepository.addUser(User(getUsers().size(), login, password));
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
}

std::vector<User> UserController::getUsers() {
    return userRepository.getUsers();
}