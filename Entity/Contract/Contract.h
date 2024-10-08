#ifndef CONTRACT_H
#define CONTRACT_H

#include <string>

class Contract {
    private:
        int id;
        int userID;
        std::string description;
        std::string beginDate;
        std::string endDate;
    public:
        Contract(int, int, std::string, std::string, std::string);

        int getID();
        int getUserID();
        std::string getDescription();
        std::string getBeginDate();
        std::string getEndDate();

        void setDescription(std::string);
        void setBeginDate(std::string);
        void setEndDate(std::string);
};

#endif