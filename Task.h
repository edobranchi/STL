//
// Created by studente on 10/05/17.
//

#ifndef STL_TASK_H
#define STL_TASK_H

#include <string>

class Task {
public:

    explicit Task( const std::string description, bool done=false, int day=10, int month=05 , int year =2017) : description(description), done(done),day(day),month(month),year(year) {};

    std::string description;
    bool done;
    int day , month ,year;

};


#endif //STL_TASK_H
