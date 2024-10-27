#ifndef IREPOSITORYFACTORY_H
#define IREPOSITORYFACTORY_H

#include "UserRepository.h"
#include "ContractRepository.h"

class IRepositoryFactory {
public:
    virtual UserRepository* createUserRepository() = 0;
    virtual ContractRepository* createContractRepository() = 0;
    virtual ~IRepositoryFactory() {}
};

#endif // IREPOSITORYFACTORY_H
