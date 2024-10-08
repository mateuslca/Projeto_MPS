#include "Contract.h"

Contract::Contract(int id, int userID, std::string description, std::string beginDate, std::string endDate) {
    this->id = id;
    this->userID = userID;
    this->description = description;
    this->beginDate = beginDate;
    this->endDate = endDate;
}

int Contract::getID() {
    return id;
}

int Contract::getUserID() {
    return userID;
}

std::string Contract::getDescription() {
    return description;
}

std::string Contract::getBeginDate() {
    return beginDate;
}

std::string Contract::getEndDate() {
    return endDate;
}

void Contract::setDescription(std::string description) {
    this->description = description;
}

void Contract::setBeginDate(std::string beginDate) {
    this->beginDate = beginDate;
}

void Contract::setEndDate(std::string endDate) {
    this->endDate = endDate;
}