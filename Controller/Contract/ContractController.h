#ifndef CONTRACT_CONTROLLER_H
#define CONTRACT_CONTROLLER_H

#include "../../Repository/Contract/ContractRepository.h"

class ContractController {
    private:
        ContractRepository contractRepository;

    public:
        ContractController(ContractRepository);

        void addContract(int, std::string, std::string, std::string);
        std::vector<Contract> getContracts();
};

#endif