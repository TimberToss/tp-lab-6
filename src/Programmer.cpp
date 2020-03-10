#include "../include/Programmer.h"

Programmer::Programmer(std::string name, int id, int workTime, int payment, Project* project, int partOfProject)
: Engineer(name, id, workTime, payment, project, partOfProject){
}

//Programmer::Programmer(std::string name, int id, int workTime, int payment, int partOfProject)
//: Engineer(name, id, workTime, payment, partOfProject) {
//
//}

Programmer::~Programmer()
{
}

int Programmer::calcSalary()
{
    return partOfProject * payment + calcWorkTimeSalary();
}