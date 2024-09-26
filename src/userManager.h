#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "user.h"
#include <vector>
#include <algorithm>
#include <iostream>

class UserManager {
private:
    std::vector<User> users;
    int nextId;

public:
    UserManager() : nextId(1) {}

    void addUser(const std::string &name, const std::string &email) {
        User user(nextId++, name, email);
        users.push_back(user);
    }

    void listUsers() const {
        if (users.empty()) {
            std::cout << "Sem usuários registrados.\n";
            return;
        }
        for (size_t i = 0; i < users.size(); ++i) {
            const User &user = users[i];
            std::cout << "ID: " << user.getId()
                      << ", Nome: " << user.getName()
                      << ", Email: " << user.getEmail() << std::endl;
        }
    }

    void removeUser(int id) {
        struct RemoveById {
            int id;
            RemoveById(int id) : id(id) {}
            bool operator()(const User &user) {
                return user.getId() == id;
            }
        };

        auto it = std::remove_if(users.begin(), users.end(), RemoveById(id));
        
        if (it != users.end()) {
            users.erase(it, users.end());
            std::cout << "Usuário removido com sucesso.\n";
        } else {
            std::cout << "Usuário não encontrado.\n";
        }
    }
};

#endif
