#include "ControllersManager.h"
#include <iostream>

ControllersManager::ControllersManager() {
    userController = new UserController(UserRepository());
    contractController = new ContractController(ContractRepository());
}

ControllersManager* ControllersManager::getInstance() {
    std::lock_guard<std::mutex> lock(mtx);

    if(instance == nullptr) {
        instance = new ControllersManager();
    }

    return instance;
}

UserController* ControllersManager::getUserController() {
    return userController;
}

ContractController* ControllersManager::getContractController() {
    return contractController;
}

void ControllersManager::listUsers() {
    for(User user : userController->getUsers()) {
        std::cout << user.getID() << " - " << user.getLogin() << std::endl;
    }
}

void ControllersManager::listContracts() {
    for(Contract contract : contractController->getContracts()) {
        std::cout << contract.getID() << " - " << contract.getDescription() << std::endl;
    }
}