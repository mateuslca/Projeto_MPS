#include "ControllersManager.h"

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