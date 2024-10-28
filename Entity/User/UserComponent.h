#ifndef USER_COMPONENT_H
#define USER_COMPONENT_H

#include <memory.h>
#include <memory>
#include <string>
#include "Mediator\Mediator.h"

// COMPOSITE

class UserComponent {
protected:
    std::shared_ptr<Mediator> mediator;

public:
    virtual ~UserComponent() = default;
    virtual void display() const = 0;

    virtual void add(std::shared_ptr<UserComponent> component) {}
    virtual void remove(std::shared_ptr<UserComponent> component) {}
    virtual void receive(const std::string& message) = 0;

    void setMediator(std::shared_ptr<Mediator> med) { mediator = med; }
    void send(const std::string& message) {
        if (mediator) {
            mediator->send(message, shared_from_this());
        }
    }
};

#endif
