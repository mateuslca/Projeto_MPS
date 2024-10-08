#include "ContractController.h"

ContractController::ContractController(ContractRepository contractRepository) {
    this->contractRepository = contractRepository;
}

void ContractController::addContract(int userID, std::string description, std::string beginDate, std::string endDate) {
    contractRepository.addContract(Contract(getContracts().size(), userID, description, beginDate, endDate));
}

std::vector<Contract> ContractController::getContracts() {
    return contractRepository.getContracts();
}