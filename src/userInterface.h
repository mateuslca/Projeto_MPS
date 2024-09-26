#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "userManager.h"
#include "contractManager.h"
#include <iostream>

class UserInterface {
private:
    UserManager userManager;
    ContractManager contractManager;

public:
    void menu() {
        int option;
        do {
            std::cout << "\nMenu:\n";
            std::cout << "1. Adicionar Usuario\n";
            std::cout << "2. Listar Usuario\n";
            std::cout << "3. Remover Usuario\n";
            std::cout << "4. Cadastrar Contrato\n";
            std::cout << "0. Sair\n";
            std::cout << "Escolha uma Opcao: ";
            std::cin >> option;

            switch (option) {
                case 1: addUser(); break;
                case 2: listUsers(); break;
                case 3: removeUser(); break;
                case 4: addContract(); break;
                case 0: std::cout << "Saindo...\n"; break;
                default: std::cout << "Opcao Invalida.\n"; break;
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

    void addContract(){
        std::string descricao, dataInicio, dataFim;
        std::cout << "Digite a descricao do seu contrato";
        std::cin.ignore();
        std::getline(std::cin, descricao);
        std::cout << "Digite a data de inicio do contrato";
        std::getline(std::cin, dataInicio);
        std::cout << "Digite a data de termino do contrato";
        std::getline(std::cin, dataFim);
        contractManager.addContract(descricao, dataInicio, dataFim);
        std::cout << "Contrato criado com sucesso!\n";
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
