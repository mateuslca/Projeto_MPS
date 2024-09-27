#ifndef CONTRACTMANAGER_H
#define CONTRACTMANAGER_H

#include "contract.h"
#include "userManager.h"
#include <vector>
#include <iostream>

class ContractManager {
private:
    std::vector<Contract> contracts;
    int nextContractId;

public:
    ContractManager() : nextContractId(1) {}

    void addContract(const UserManager &userManager) {
        std::string description, startDate, endDate;
        int userId;

        std::cout << "Digite a descricao do contrato: ";
        std::cin.ignore();
        std::getline(std::cin, description);

        std::cout << "Digite a data de inicio: ";
        std::getline(std::cin, startDate);

        std::cout << "Digite a data de inicio: ";
        std::getline(std::cin, endDate);

        std::cout << "Selecione um usuario pelo seu ID para ser o dono do contrato:\n";
        userManager.listUsers();  
        std::cout << "Digite o ID do usuario escolhido: ";
        std::cin >> userId;

        std::string userNameContract = userManager.getUserNameById(userId);  

        if (!userNameContract.empty()) {

            Contract newContract(nextContractId++, description, startDate, endDate, userNameContract);
            contracts.push_back(newContract);
            std::cout << "Contrato adicionado com sucesso!\n";
        } else {
            std::cout << "ID de usuario invalido.\n";
        }
    }

    void listContracts() const {
        if (contracts.empty()) {
            std::cout << "Sem contratos disponiveis.\n";
            return;
        }

        for (const auto &contract : contracts) {
            std::cout << "ID do Contrato: " << contract.getId() << "\n"
                      << "Descricao: " << contract.getDescription() << "\n"
                      << "Data de Inicio: " << contract.getStartDate() << "\n"
                      << "Data de Termino: " << contract.getEndDate() << "\n"
                      << "Usuario do Contrato: " << contract.getUserNameContract() << "\n\n";
        }
    }
};

#endif
