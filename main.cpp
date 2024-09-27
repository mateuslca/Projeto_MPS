#include "Controller/User/UserController.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    UserController userController = UserController(UserRepository());

    userController.addUser("Lima", "Lima@email.com");
    userController.addUser("Leozin", "leozin@leozin.leozin");
}