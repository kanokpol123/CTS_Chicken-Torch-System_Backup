#ifndef CHICKENSYSTEM_H
#define CHICKENSYSTEM_H

#include "Customer.h"
#include "Menu.h"
#include "Queue.h"
#include <list>
#include <queue>
using namespace std;

class ChickenSystem
{
    private:
        list <Customer*> customerList;
        queue <Queue*> queueList;
    public:
        void addCustomer(Customer* Customer);
        void addQueue(Queue* Queue);
};

#endif