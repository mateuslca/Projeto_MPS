#ifndef USER_GROUP_H
#define USER_GROUP_H

#include "UserComponent.h"
#include <vector>
#include <string>
#include <memory>

class UserGroup : public UserComponent {
private:
    std::string groupName;
    std::vector<std::shared_ptr<UserComponent>> users;

public:
    UserGroup(const std::string& name);

    void add(std::shared_ptr<UserComponent> component) override;
    void remove(std::shared_ptr<UserComponent> component) override;

    void display() const override;
};

#endif
