#include "Controller/Singleton/ControllersManager.h"
#include <iostream>
#include <string>
#include <vector>

ControllersManager* ControllersManager::instance = nullptr;
std::mutex ControllersManager::mtx;

int main() {
    ControllersManager* controllersManager = ControllersManager::getInstance();

    controllersManager->getUserController()->addUser("Leonardo Chianca", "leozin@dev.com");
    controllersManager->getUserController()->addUser("Mateus Lima", "limao@dev.com");
    controllersManager->getUserController()->addUser("Bruno Formiga", "bczinho@dev.com");
    controllersManager->getUserController()->addUser("João Victor", "jv@dev.com");

    controllersManager->getContractController()->addContract(0, "Cinco parafusos por R$1.000.000,00", "Hoje", "Amanhã");
    controllersManager->getContractController()->addContract(3, "Três lobos para 1 Mogli", "Hoje", "Amanhã");

    std::cout << "Users" << std::endl;

    for(User user: controllersManager->getUserController()->getUsers()) {
        std::cout << "\tID: " << user.getID() << std::endl
                  << "\tLogin: " << user.getEmail() << std::endl
                  << "\tPassword: " << user.getPassword() << std::endl
                  << "\tContracts:" << std::endl;

        for(Contract contract: controllersManager->getContractController()->getContracts()) {
            if(contract.getUserID() == user.getID()) {
                std::cout << "\t\tID: " << contract.getID() << std::endl
                          << "\t\tDescription: " << contract.getDescription() << std::endl
                          << "\t\tBegin date: " << contract.getBeginDate() << std::endl
                          << "\t\tEnd date: " << contract.getEndDate() << std::endl;
            }
        }

        std::cout << std::endl;
    }
}