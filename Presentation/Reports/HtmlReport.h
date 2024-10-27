#ifndef HTMLREPORT_H
#define HTMLREPORT_H

#include "Report.h"
#include <iostream>

class HtmlReport : public Report {
protected:
    void gatherData() override {
        std::cout << "Gathering data for HTML report..." << std::endl;
    }

    void formatReport() override {
        std::cout << "Formatting report as HTML..." << std::endl;
    }

    void saveReport() override {
        std::cout << "Saving report as HTML file..." << std::endl;
    }
};

#endif // HTMLREPORT_H
