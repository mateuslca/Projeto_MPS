#ifndef FILE_CONTRACT_REPOSITORY_H
#define FILE_CONTRACT_REPOSITORY_H

#include "ContractRepository.h"
#include <string>
#include <vector>
#include <fstream> // Para manipulação de arquivos

class FileContractRepository : public ContractRepository {
public:
    void addContract(const Contract& contract) override;
    std::vector<Contract> getContracts() override;
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename);
};

#endif // FILE_CONTRACT_REPOSITORY_H
