#include "FileContractRepository.h"
#include <fstream>
#include <sstream>

void FileContractRepository::addContract(const Contract& contract) {
    // Adiciona o contrato a um vetor ou estrutura interna
}

std::vector<Contract> FileContractRepository::getContracts() {
    // Retorna os contratos armazenados
    return std::vector<Contract>();
}

void FileContractRepository::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        // Supondo que você tenha um método Contract::fromString
        Contract contract = Contract::fromString(line);
        addContract(contract); // Adiciona contrato ao repositório
    }
}

void FileContractRepository::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& contract : getContracts()) {
        file << contract.toString() << std::endl; // Supondo que você tenha um método toString()
    }
}
