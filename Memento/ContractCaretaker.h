#ifndef CONTRACT_CARETAKER_H
#define CONTRACT_CARETAKER_H

#include "ContractMemento.h"
#include <stack>
#include <Contract.h>

class ContractCaretaker
{
private:
    std::stack<ContractMemento *> history;

public:
    void save(Contract *contract);
    void undo(Contract *contract);
};

#endif
