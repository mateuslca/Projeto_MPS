#include "ContractCaretaker.h"
#include "Contract.h"

void ContractCaretaker::save(Contract *contract)
{
    history.push(contract->save());
}

void ContractCaretaker::undo(Contract *contract)
{
    if (!history.empty())
    {
        contract->restore(history.top());
        history.pop();
    }
}
