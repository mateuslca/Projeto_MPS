#include "UserPresentation.h"
#include "../Menu/Menu.h"
#include "../../Controller/Singleton/ControllersManager.h"
#include <iostream>
#include <vector>

UserPresentation::UserPresentation() {

}

void UserPresentation::start() {
    ControllersManager* controllersManager = ControllersManager::getInstance();

    while(1) {
        int option = Menu::getUserOptions();
        std::string login = "", password = "";

        switch(option) {
            case 0:
                return;
            case 1:
                std::cout << "Digite o login: ";
                std::cin >> login;
                std::cout << "Digite a senha: ";
                std::cin >> password;

                controllersManager->getUserController()->addUser(login, password);

                break;
            case 2:
                controllersManager->listUsers();

                break;
            default:
                break;
        }

        std::cout << std::endl;
    }
}