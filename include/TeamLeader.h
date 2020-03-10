#pragma once

#include <Interfaces/Heading.h>
#include "Programmer.h"

class TeamLeader : Programmer, Heading {
public:
    TeamLeader(std::string name, int id, int workTime, int payment, Project* project, int partOfProject, );
};