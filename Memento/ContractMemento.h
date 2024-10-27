#ifndef CONTRACT_MEMENTO_H
#define CONTRACT_MEMENTO_H

#include <string>

class ContractMemento
{
private:
    int id;
    int userID;
    std::string description;
    std::string beginDate;
    std::string endDate;

public:
    ContractMemento(int id, int userID, std::string description, std::string beginDate, std::string endDate);

    int getID();
    int getUserID();
    std::string getDescription();
    std::string getBeginDate();
    std::string getEndDate();
};

#endif
