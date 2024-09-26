#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "userManager.h"
#include <iostream>

class UserInterface {
private:
    UserManager userManager;

public:
    void menu() {
        int option;
        do {
            std::cout << "\nMenu:\n";
            std::cout << "1. Adicionar Usuário\n";
            std::cout << "2. Listar Usuário\n";
            std::cout << "3. Remover Usuário\n";
            std::cout << "0. Sair\n";
            std::cout << "Escolha uma Opção: ";
            std::cin >> option;

            switch (option) {
                case 1: addUser(); break;
                case 2: listUsers(); break;
                case 3: removeUser(); break;
                case 0: std::cout << "Saindo...\n"; break;
                default: std::cout << "Opção Inválida.\n"; break;
            }
        } while (option != 0);
    }

    void addUser() {
        std::string name, email;
        std::cout << "Digite o nome: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Digite o email: ";
        std::getline(std::cin, email);
        userManager.addUser(name, email);
        std::cout << "Usuário adicionado com sucesso!\n";
    }

    void listUsers() {
        userManager.listUsers();
    }

    void removeUser() {
        int id;
        std::cout << "Digite o ID do Usuário para remove-lo: ";
        std::cin >> id;
        userManager.removeUser(id);
    }
};

#endif
