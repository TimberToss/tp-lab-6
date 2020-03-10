#pragma once

#include "Project.h"
#include "Engineer.h"

class Programmer :
        public Engineer {
public:
    Programmer(std::string name, int id, int workTime, int payment, Project* project, int partOfProject);
//    Programmer(std::string name, int id, int workTime, int payment, int partOfProject);
    ~Programmer();
    int calcSalary();

};