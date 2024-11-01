#ifndef USER_H
#define USER_H

#include "UserComponent.h"
#include <string>

class User : public UserComponent, public std::enable_shared_from_this<User> {
private:
    int id;
    std::string login;
    std::string password;

public:
    User(int id, const std::string& login, const std::string& password);

    int getID() const;
    std::string getPassword() const;
    std::string getLogin() const;

    void setPassword(const std::string& newPassword);
    void setLogin(const std::string& newLogin);

    void display() const override;

    void requestPermissionChange(std::shared_ptr<UserGroup> userGroup);
};

#endif
