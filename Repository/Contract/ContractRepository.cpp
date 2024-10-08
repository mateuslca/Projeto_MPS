#include "ContractRepository.h"

ContractRepository::ContractRepository() {

}

void ContractRepository::addContract(Contract contract) {
    contracts.push_back(contract);
}

std::vector<Contract> ContractRepository::getContracts() {
    return contracts;
}