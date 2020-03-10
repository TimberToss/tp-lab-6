#pragma once
#include <string>
#include "Employee.h"
#include "Interfaces/WorkTime.h"

class Project;
class Engineer :
        public Employee, public WorkTime {
public:
    Engineer(std::string name, int id, int workTime, int payment, class  Project* project, int partOfProject);
//    Engineer(std::string name, int id, int workTime, int payment, int partOfProject);
    ~Engineer();
    Project* getProject();
    void setProject(Project* project);
    int calcWorkTimeSalary();
    int getWorkTime();
    void serWorkTime(int workTime);
    int getPartOfProject();
    void setPartOfProject(int partOfProject);

    int calcSalary();
protected:
    Project* project;
    int workTime;
    int partOfProject;
};
