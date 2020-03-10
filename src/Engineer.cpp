#include "../include/Engineer.h"

Engineer::Engineer(std::string name, int id, int workTime, int payment, Project* project, int partOfProject) : Employee(name, id, payment) {
    this->workTime = workTime;
    this->project = project;
    this->partOfProject = partOfProject;
}


//Engineer::Engineer(std::string name, int id, int workTime, int payment, int partOfProject) : Employee(name, id, payment) {
//    this->workTime = workTime;
//    this->project = project;
//    this->partOfProject = partOfProject;
//    this->project = 0;
//}


Engineer::~Engineer() {}

Project* Engineer::getProject() {
    return this->project;
}

int Engineer::getWorkTime() {
    return workTime;
}

void Engineer::setProject(Project* project) {
    this->project = project;
}

void Engineer::setPartOfProject(int partOfProject) {
    this->partOfProject = partOfProject;
}
int Engineer::calcWorkTimeSalary() {
    return workTime * payment;
}

int Engineer::calcSalary() {
    return calcWorkTimeSalary();
}

void Engineer::serWorkTime(int workTime) {
    this->workTime = workTime;
}

int Engineer::getPartOfProject() {
    return partOfProject;
} 