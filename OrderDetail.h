#ifndef ORDERDETAIL_H
#define ORDERDETAIL_H
#include "Food.h"
#include <string>
using namespace std;

class OrderDetail
{
private:
    Food *OrderItem;
    int foodQty;
    string foodId;
public:
    string getFood();
    void addFoodDetail(Food *food);
    
};

#endif
