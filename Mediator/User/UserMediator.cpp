#include "UserMediator.h"
#include "UserComponent.h"
#include "User.h"
#include "UserGroup.h"
#include <iostream>

void UserMediator::registerComponent(std::shared_ptr<UserComponent> component) {
    components.push_back(component);
}

void UserMediator::send(const std::string& message, std::shared_ptr<UserComponent> sender) {
    for (const auto& component : components) {
        if (component != sender) {
            component->receive(message);
        }
    }
}

void UserMediator::changePermissionPolicy(std::shared_ptr<User> user, std::shared_ptr<UserGroup> userGroup) {
    // Mocked method - prints out a message
    std::cout << "permissão para grupo de usuários ajustada" << std::endl;
}
