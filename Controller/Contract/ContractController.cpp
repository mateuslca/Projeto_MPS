#include "ContractController.h"

ContractController::ContractController(ContractRepository contractRepository)
{
    this->contractRepository = contractRepository;
}

void ContractController::addContract(int userID, std::string description, std::string beginDate, std::string endDate)
{
    contractRepository.addContract(Contract(getContracts().size(), userID, description, beginDate, endDate));
}

std::vector<Contract> ContractController::getContracts()
{
    return contractRepository.getContracts();
}

Contract *ContractController::findContractByID(int contractID)
{
    for (Contract &contract : contractRepository.getContracts())
    {
        if (contract.getID() == contractID)
        {
            return &contract; // Retorna o contrato se o ID corresponder
        }
    }
    return nullptr; // Retorna nullptr se o contrato não for encontrado
}

void ContractController::updateContract(int contractID, std::string newDescription, std::string newBeginDate, std::string newEndDate)
{
    Contract *contract = findContractByID(contractID);
    if (contract != nullptr)
    {
        caretaker.save(contract); // Salva o estado atual antes de atualizar
        contract->setDescription(newDescription);
        contract->setBeginDate(newBeginDate);
        contract->setEndDate(newEndDate);
        contractRepository.saveToFile("contracts.txt"); // Persiste a atualização no arquivo
    }
    else
    {
        // Tratar o caso de contrato não encontrado, se necessário
    }
}

void ContractController::undoUpdate(int contractID)
{
    Contract *contract = findContractByID(contractID);
    if (contract != nullptr)
    {
        caretaker.undo(contract);
        contractRepository.saveToFile("contracts.txt"); // Persiste o estado restaurado no arquivo
    }
    else
    {
        // Tratar o caso de contrato não encontrado, se necessário
    }
}

ContractRepository *ContractController::getRepository()
{
    return &contractRepository;
}
