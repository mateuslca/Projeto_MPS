#include "User.h"
#include <string>

User::User(int id, std::string login, std::string password) {
    this->id = id;
    this->login = login;
    this->password = password;
}

int User::getID() {
    return id;
}

std::string User::getPassword() {
    return password;
}

std::string User::getLogin() {
    return login;
}

void User::setPassword(std::string password) {
    this->password = password;
}

void User::setLogin(std::string login) {
    this->login = login;
}