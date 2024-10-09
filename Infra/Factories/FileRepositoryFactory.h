#ifndef FILEREPOSITORYFACTORY_H
#define FILEREPOSITORYFACTORY_H

#include "IRepositoryFactory.h"
#include "FileUserRepository.h"   
#include "FileContractRepository.h" 

class FileRepositoryFactory : public IRepositoryFactory {
public:
    UserRepository* createUserRepository() override {
        return new FileUserRepository(); // Atualize aqui
    }

    ContractRepository* createContractRepository() override {
        return new FileContractRepository(); // Certifique-se de que isso esteja implementado
    }
};

#endif // FILEREPOSITORYFACTORY_H
