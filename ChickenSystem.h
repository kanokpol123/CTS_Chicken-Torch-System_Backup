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
        list <Menu*> menuList;
        queue <Queue*> queueList;
    public:
        void addCustomer(Customer* Customer);
        void addMenu(Menu* Menu);
        void addQueue(Queue* Queue);
};

#endif