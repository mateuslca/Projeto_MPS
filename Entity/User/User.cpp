#include "User.h"
#include <string>

User::User(int id, std::string name, std::string email) {
    this->id = id;
    this->name = name;
    this->email = email;
}

int User::getID() {
    return id;
}

std::string User::getName() {
    return name;
}

std::string User::getEmail() {
    return email;
}

void User::setName(std::string name) {
    this->name = name;
}

void User::setEmail(std::string email) {
    this->email = email;
}