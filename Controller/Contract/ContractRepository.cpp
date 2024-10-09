#include "ContractRepository.h"

ContractRepository::ContractRepository() {
}

void ContractRepository::addContract(const Contract& contract) {
    contracts.push_back(contract);
}

std::vector<Contract> ContractRepository::getContracts() const {
    return contracts;
}
