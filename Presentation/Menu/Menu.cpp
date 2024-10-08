#include "Menu.h"
#include <iostream>

Menu::Menu() {

}

int Menu::start() {
    std::cout << "Opções:\n\t"
                  << "[1] Usuário\n\t"
                  << "[2] Contrato\n\n";

    int option = -1;

    std::cin >> option;

    return option;
}

int Menu::getUserOptions() {
    std::cout << "Opções:\n\t"
              << "[1] Adicionar usuário\n\t"
              << "[2] Listar usuário\n\t"
              << "[0] Sair\n\n";

    int option = -1;

    std::cin >> option;

    return option;
}

int Menu::getContractOptions() {
    std::cout << "Opções:\n\t"
              << "[1] Adicionar contrato\n\t"
              << "[2] Listar contratos\n\t"
              << "[0] Sair\n\n";

    int option = -1;

    std::cin >> option;

    return option;
}