#ifndef PDFREPORT_H
#define PDFREPORT_H

#include "Report.h"
#include <iostream>

class PdfReport : public Report {
protected:
    void gatherData() override {
        std::cout << "Gathering data for PDF report..." << std::endl;
    }

    void formatReport() override {
        std::cout << "Formatting report as PDF..." << std::endl;
    }

    void saveReport() override {
        std::cout << "Saving report as PDF file..." << std::endl;
    }
};

#endif // PDFREPORT_H
