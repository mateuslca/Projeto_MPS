#include "Controller/Singleton/ControllersManager.h"
#include "Presentation/Menu/Menu.h"
#include "Presentation/User/UserPresentation.h"
#include "Presentation/Contract/ContractPresentation.h"
#include <iostream>
#include <string>
#include <vector>

ControllersManager* ControllersManager::instance = nullptr;
std::mutex ControllersManager::mtx;

int main() {
    ControllersManager* controllersManager = ControllersManager::getInstance();

    while(1) {
        int option = Menu::start();

        switch(option) {
            case 1:
                UserPresentation::start();

                break;
            case 2:
                ContractPresentation::start();

                break;
            default:
                return 0;
        }
    }

    return 0;
}