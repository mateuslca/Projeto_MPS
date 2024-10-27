#include "FileUserRepository.h"

void FileUserRepository::addUser(const User& user) {
    UserRepository::addUser(user); // Chama o método da classe base
    saveToFile("users.txt"); // Nome do arquivo onde os usuários serão armazenados
}

std::vector<User> FileUserRepository::getUsers() {
    if (users.empty()) {
        loadFromFile("users.txt");
    }
    return UserRepository::getUsers();
}
