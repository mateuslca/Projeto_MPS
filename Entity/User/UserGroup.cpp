#include "UserGroup.h"
#include <algorithm>
#include <iostream>

UserGroup::UserGroup(const std::string& name) : groupName(name) {}

void UserGroup::add(std::shared_ptr<UserComponent> component) {
    users.push_back(component);
}

void UserGroup::remove(std::shared_ptr<UserComponent> component) {
    users.erase(std::remove(users.begin(), users.end(), component), users.end());
}

void UserGroup::display() const {
    std::cout << "User Group: " << groupName << std::endl;
    for (const auto& user : users) {
        user->display();
    }
}
