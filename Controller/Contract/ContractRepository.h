#ifndef CONTRACT_REPOSITORY_H
#define CONTRACT_REPOSITORY_H

#include <vector>
#include "Contract.h" // Certifique-se de que este caminho está correto

class ContractRepository {
private:
    std::vector<Contract> contracts;

public:
    ContractRepository();

    virtual void addContract(const Contract& contract); // Adicione 'virtual'
    virtual std::vector<Contract> getContracts() const; // Adicione 'virtual' e 'const'
};

#endif // CONTRACT_REPOSITORY_H
