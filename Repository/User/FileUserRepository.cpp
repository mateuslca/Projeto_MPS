#include "FileUserRepository.h"
#include <fstream>
#include <iostream>

void FileUserRepository::addUser(User user) {
    // Supondo que o usuário tenha um método toString() que retorna uma string formatada
    std::ofstream outFile("users.txt", std::ios::app); // Abre o arquivo em modo append
    if (outFile.is_open()) {
        outFile << user.toString() << std::endl; // Salva o usuário no arquivo
        outFile.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo para escrita." << std::endl;
    }
}

std::vector<User> FileUserRepository::getUsers() {
    std::vector<User> users;
    std::ifstream inFile("users.txt");
    std::string line;
    
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            User user = User::fromString(line); // Método para criar um User a partir de uma string
            users.push_back(user);
        }
        inFile.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo para leitura." << std::endl;
    }
    
    return users;
}
