#ifndef MENU_H
#define MENU_H

#include <list>
#include <fstream>
#include "Food.h"
#include <string>
using namespace std;
class Menu
{
    private:
        list <Food*> menuList;
        int amountInMenu;
    public:
        Menu();
        void addFoodToMenu();
        void deleteFood(string foodname);
        void printMenu();
};

#endif