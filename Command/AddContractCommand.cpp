#include "AddContractCommand.h"

AddContractCommand::AddContractCommand(ContractController *controller, int userID, std::string description, std::string beginDate, std::string endDate)
    : contractController(controller), userID(userID), description(description), beginDate(beginDate), endDate(endDate) {}

void AddContractCommand::execute()
{
    contractController->addContract(userID, description, beginDate, endDate);
    contractController->getRepository()->saveToFile("contracts.txt");
}
