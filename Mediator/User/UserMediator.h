#ifndef USER_MEDIATOR_H
#define USER_MEDIATOR_H

#include "Mediator.h"
#include <vector>
#include <memory>
#include <string>

class User;
class UserGroup;
class UserComponent;

class UserMediator : public Mediator {
private:
    std::vector<std::shared_ptr<UserComponent>> components;

public:
    void registerComponent(std::shared_ptr<UserComponent> component);
    void send(const std::string& message, std::shared_ptr<UserComponent> sender) override;
    
    // Method to allow a User to change the permission policy of a UserGroup
    void changePermissionPolicy(std::shared_ptr<User> user, std::shared_ptr<UserGroup> userGroup);
};

#endif // USER_MEDIATOR_H
