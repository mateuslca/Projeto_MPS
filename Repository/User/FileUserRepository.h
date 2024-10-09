#ifndef FILE_USER_REPOSITORY_H
#define FILE_USER_REPOSITORY_H

#include "UserRepository.h"
#include <string>
#include <vector>

class FileUserRepository : public UserRepository {
public:
    void addUser(User user) override;
    std::vector<User> getUsers() override;
    // Adicione métodos adicionais, se necessário
};

#endif // FILE_USER_REPOSITORY_H
