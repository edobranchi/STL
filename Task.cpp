//
// Created by studente on 10/05/17.
//

#include "Task.h"

bool Task::operator==(const Task &right) const {
    if(description != right.description)
        return false;
    return true;
}
