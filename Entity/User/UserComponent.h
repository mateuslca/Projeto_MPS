#ifndef USER_COMPONENT_H
#define USER_COMPONENT_H

#include <memory>

class UserComponent {
public:
    virtual ~UserComponent() = default;
    virtual void display() const = 0;

    virtual void add(std::shared_ptr<UserComponent> component) {}
    virtual void remove(std::shared_ptr<UserComponent> component) {}
};

#endif
