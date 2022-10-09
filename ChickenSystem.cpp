#include "ChickenSystem.h"
void ChickenSystem::addCustomer(Customer* Customer)
{
    customerList.push_back(Customer);
}
void ChickenSystem::addQueue(Queue* Queue)
{
    queueList.push(Queue);
}
