#include "ChickenSystem.h"
void ChickenSystem::addCustomer(Customer* Customer)
{
    customerList.push_back(Customer);
}
void ChickenSystem::addMenu(Menu* Menu)
{
    menuList.push_back(Menu);
}
void ChickenSystem::addQueue(Queue* Queue)
{
    queueList.push(Queue);
}
