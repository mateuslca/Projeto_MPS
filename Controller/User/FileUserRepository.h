#ifndef FILE_USER_REPOSITORY_H
#define FILE_USER_REPOSITORY_H

#include "UserRepository.h"
#include <string>
#include <vector>
#include <fstream>

class FileUserRepository : public UserRepository {
public:
    void addUser(const User& user) override; // Adicione 'override'
    std::vector<User> getUsers() override; // Adicione 'override'
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename);
};

#endif // FILE_USER_REPOSITORY_H

