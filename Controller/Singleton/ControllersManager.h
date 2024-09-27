#ifndef CONTROLLERS_MANAGER_H
#define CONTROLLERS_MANAGER_H

#include <mutex>
#include "../User/UserController.h"
#include "../Contract/ContractController.h"

class ControllersManager {
    private:
        static ControllersManager* instance;
        static std::mutex mtx;

        UserController* userController;
        ContractController* contractController;

        ControllersManager();

    public:
        static ControllersManager* getInstance();
        UserController* getUserController();
        ContractController* getContractController();
};

#endif