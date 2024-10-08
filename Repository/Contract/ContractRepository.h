#ifndef CONTRACT_REPOSITORY_H
#define CONTRACT_REPOSITORY_H

#include "../../Entity/Contract/Contract.h"
#include <vector>

class ContractRepository {
    private:
        std::vector<Contract> contracts;
    public:
        ContractRepository();

        void addContract(Contract);
        std::vector<Contract> getContracts();
};

#endif