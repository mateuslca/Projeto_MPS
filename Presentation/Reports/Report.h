#ifndef REPORT_H
#define REPORT_H

#include <string>

class Report {
public:
    virtual void generateReport() {
        gatherData();
        formatReport();
        saveReport();
    }
    
protected:
    virtual void gatherData() = 0;
    virtual void formatReport() = 0;
    virtual void saveReport() = 0;
    virtual ~Report() {}
};

#endif // REPORT_H
