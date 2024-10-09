#ifndef FILEREPOSITORYFACTORY_H
#define FILEREPOSITORYFACTORY_H

#include "FileUserRepository.h" 
#include "IRepositoryFactory.h"  
#include "FileContractRepository.h" 

class FileRepositoryFactory : public IRepositoryFactory {
public:
    UserRepository* createUserRepository() override {
        return new FileUserRepository(); 
    }

    ContractRepository* createContractRepository() override {
        return new FileContractRepository(); 
    }
};

#endif // FILEREPOSITORYFACTORY_H
