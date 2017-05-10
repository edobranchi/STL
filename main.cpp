#include <iostream>
#include <list>
#include <vector>

#include "Task.h"

int main() {

    std::list<Task> agendaL;
    std::vector<Task> agendaV;

    Task t1("Lezione Programmazione",false, 15,07,2017);
    Task t2("lezione Stl",false,10,04,2017);
    Task t3("Esercitazione Stl",false,13,8,2017);

    agendaL.push_back(t1);
    agendaL.push_back(t2);
    agendaL.push_back(t3);

    agendaV.push_back(t1);
    agendaV.push_back(t2);
    agendaV.push_back(t3);

    for(int i=0; i< agendaV.size();i++) {
        if (agendaV[i].description == "lezione Stl")
            agendaV[i].done = true;
        std::cout << (agendaV[i]).description << std::endl;
    }

    for (auto itr= agendaL.begin(); itr != agendaL.end(); itr++)
    std::cout << itr->description << std::endl;

    for (Task& t : agendaV )
    t.done = true;


    return 0;

}