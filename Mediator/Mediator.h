#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>
#include <memory>

class UserComponent;

class Mediator {
public:
    virtual ~Mediator() = default;
    
    // Pure virtual method for sending messages between components
    virtual void send(const std::string& message, std::shared_ptr<UserComponent> sender) = 0;
};

#endif // MEDIATOR_H
