#ifndef MENU_H
#define MENU_H

#include "Food.h"
#include <string>
using namespace std;
class Menu
{
    private:
        int amountInMenu;
    public:
        void addFood();
        void deleteFood(string foodname);
};

#endif