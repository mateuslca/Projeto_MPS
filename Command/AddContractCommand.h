#ifndef ADD_CONTRACT_COMMAND_H
#define ADD_CONTRACT_COMMAND_H

#include "Command.h"
#include "../../Controller/Contract/ContractController.h"

class AddContractCommand : public Command
{
private:
    ContractController *contractController;
    int userID;
    std::string description;
    std::string beginDate;
    std::string endDate;

public:
    AddContractCommand(ContractController *controller, int userID, std::string description, std::string beginDate, std::string endDate);
    void execute() override;
};

#endif
