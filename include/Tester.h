#pragma once

#include "Engineer.h"

class Tester :
        public Engineer {
public:
    Tester(std::string name, int id, int workTime, int payment);
    ~Tester();
    int calcSalary();
};