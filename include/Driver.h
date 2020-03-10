#pragma once

#include "Personal.h"

class Driver : Personal {
public:
    Driver(std::string name, int id, int payment, int workTime);
    ~Driver();
    int getNumberOfTransportedProduct();
    void setNumberOfTransportedProduct(int numberOfTransportedProduct);
    int calcWorkTimeSalary();
    int calcSalary();

private:
    int numberOfTransportedProduct;
};