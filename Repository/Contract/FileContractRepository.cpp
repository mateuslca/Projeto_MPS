#include "FileContractRepository.h"

void FileContractRepository::addContract(const Contract &contract)
{
    ContractRepository::addContract(contract);
    saveToFile("contracts.txt"); // Nome do arquivo onde os contratos serão armazenados
}

std::vector<Contract> FileContractRepository::getContracts()
{
    if (contracts.empty())
    {
        loadFromFile("contracts.txt");
    }
    return ContractRepository::getContracts();
}

void FileContractRepository::loadFromFile(const std::string &filename)
{
    // Lógica para carregar contratos de um arquivo
}

void FileContractRepository::saveToFile(const std::string &filename)
{
    // Lógica para salvar contratos em um arquivo
}
