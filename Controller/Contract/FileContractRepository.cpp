#include "FileContractRepository.h"

void FileContractRepository::addContract(const Contract& contract) {
    ContractRepository::addContract(contract);
    saveToFile("contracts.txt"); // Nome do arquivo onde os contratos serão armazenados
}

std::vector<Contract> FileContractRepository::getContracts() {
    if (contracts.empty()) {
        loadFromFile("contracts.txt");
    }
    return ContractRepository::getContracts();
}
