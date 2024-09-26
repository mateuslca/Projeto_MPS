#ifndef CONTRACT_MANAGER
#define CONTRACT_MANAGER

#include "contrato.h"
#include <vector>
#include <algorithm>
#include <iostream>

class ContractManager{
    private:
        std::vector<Contrato>contracts;
        int nextId;

    public: 
        ContractManager() : nextId(1){}
        
        void addContract(const std::string &descricao, const std::string &dataInicio, const std::string &dataFim) {
            Contrato contract(nextId++, descricao, dataInicio,dataFim);
            contracts.push_back(contract);
        }
};

#endif