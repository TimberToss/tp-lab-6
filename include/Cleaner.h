#pragma once

#include "Personal.h"

class Cleaner : Personal {
public:
    Cleaner(std::string name, int id, int payment, int workTime);
    ~Cleaner();
    int getCleaningQuality();
    void setCleaningQuality(int cleaningQuality);
    int calcWorkTimeSalary();
    int calcSalary();

private:
    int cleaningQuality;
};

