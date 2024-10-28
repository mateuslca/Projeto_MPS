#include "User.h"
#include "UserMediator.h"
#include <iostream>

User::User(int id, const std::string& login, const std::string& password)
    : id(id), login(login), password(password) {}

int User::getID() const { return id; }
std::string User::getPassword() const { return password; }
std::string User::getLogin() const { return login; }

void User::setPassword(const std::string& newPassword) { password = newPassword; }
void User::setLogin(const std::string& newLogin) { login = newLogin; }

void User::display() const {
    std::cout << "User ID: " << id << ", Login: " << login << std::endl;
}

void User::requestPermissionChange(std::shared_ptr<UserGroup> userGroup) {
    if (mediator) {
        std::static_pointer_cast<UserMediator>(mediator)->changePermissionPolicy(shared_from_this(), userGroup);
    }
}