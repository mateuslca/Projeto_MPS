#ifndef CONTRACT_CONTROLLER_H
#define CONTRACT_CONTROLLER_H

#include "../../Repository/Contract/ContractRepository.h"
#include "ContractCaretaker.h"
#include <vector>

class ContractController
{
private:
    ContractRepository contractRepository;
    ContractCaretaker caretaker;

public:
    ContractController(ContractRepository);

    void addContract(int userID, std::string description, std::string beginDate, std::string endDate);
    std::vector<Contract> getContracts();
    void updateContract(int contractID, std::string newDescription, std::string newBeginDate, std::string newEndDate);
    void undoUpdate(int contractID);
    ContractRepository *getRepository();

    Contract *findContractByID(int contractID); // Declaração do método
};

#endif
