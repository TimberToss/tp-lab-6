#include "../include/Tester.h"

Tester::Tester(std::string name, int id, int workTime, int payment, Project* project) : Engineer(name, id, workTime, payment, project, 0) {}

//Tester::Tester(std::string name, int id, int workTime, int payment) : Engineer(name, id, workTime, payment, 0) {
//    project = 0;
//}

Tester::~Tester() {}

int Tester::calcSalary() {
    return calcWorkTimeSalary();
}