#include "User.h"
#include <string>

User::User(int id, std::string email, std::string password) {
    this->id = id;
    this->email = email;
    this->password = password;
}

int User::getID() {
    return id;
}

std::string User::getPassword() {
    return password;
}

std::string User::getEmail() {
    return email;
}

void User::setPassword(std::string name) {
    this->password = password;
}

void User::setEmail(std::string email) {
    this->email = email;
}