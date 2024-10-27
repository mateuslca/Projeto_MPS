#include "ContractMemento.h"

ContractMemento::ContractMemento(int id, int userID, std::string description, std::string beginDate, std::string endDate)
    : id(id), userID(userID), description(description), beginDate(beginDate), endDate(endDate) {}

int ContractMemento::getID() { return id; }
int ContractMemento::getUserID() { return userID; }
std::string ContractMemento::getDescription() { return description; }
std::string ContractMemento::getBeginDate() { return beginDate; }
std::string ContractMemento::getEndDate() { return endDate; }
