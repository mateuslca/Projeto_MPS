#include "ContractPresentation.h"
#include "../Menu/Menu.h"
#include "../../Controller/Singleton/ControllersManager.h"
#include <iostream>
#include <vector>

ContractPresentation::ContractPresentation() {

}

void ContractPresentation::start() {
    ControllersManager* controllersManager = ControllersManager::getInstance();
    int userID = -1;
    std::string description = "", beginDate = "", endDate = "";

    while(1) {
        int option = Menu::getContractOptions();

        switch(option) {
            case 0:
                return;
            case 1:
                if(controllersManager->getUserController()->getUsers().empty()) {
                    std::cout << "Ainda não há usuários cadastrados!" << std::endl;

                    break;
                }
                
                std::cout << "Opções de usuários:\n\n";
                
                controllersManager->listUsers();

                std::cout << "Digite o User ID: ";

                std::cin >> userID;
                std::cout << "Digite a descrição: ";
                std::cin >> description;
                std::cout << "Digite a data de início: ";
                std::cin >> beginDate;
                std::cout << "Digite a data de término: ";
                std::cin >> endDate;

                controllersManager->getContractController()->addContract(userID, description, beginDate, endDate);

                break;
            case 2:
                controllersManager->listContracts();

                break;
            default:
                break;
        }

        std::cout << std::endl;
    }
}