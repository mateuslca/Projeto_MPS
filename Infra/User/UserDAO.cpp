#include "UserDAO.h"
#include <stdexcept>  // Para std::runtime_error

std::string filename = "user_data.bin";

void UserDAO::save(const User& user, const std::string& filename) {
    std::ofstream bin(filename, std::ios::binary | std::ios::app);
    if (!bin) {
        throw std::runtime_error("Não foi possível abrir o arquivo para gravação.");
    }

    // Escreve os dados do usuário no arquivo
    bin.write(reinterpret_cast<const char*>(&user), sizeof(User));
    bin.close();
}

User UserDAO::load(int userId, const std::string& filename) {
    std::ifstream bin(filename, std::ios::binary);
    if (!bin) {
        throw std::runtime_error("Não foi possível abrir o arquivo para leitura.");
    }

    User user(0, "", "");  // Cria um objeto User vazio

    // Lê os dados do arquivo
    while (bin.read(reinterpret_cast<char*>(&user), sizeof(User))) {
        if (user.getID() == userId) {
            bin.close();
            return user;  // Retorna o usuário encontrado
        }
    }

    bin.close();
    throw std::runtime_error("Usuário não encontrado.");
}
