
#include "Menu.h"
Menu::Menu()
{
    this->amountInMenu = 0;
    addFoodToMenu();
}
void Menu::addFoodToMenu()
{
    string foodName;
    string size;
    string typeOfFood;
    string price;
    string read;

    ifstream data_user_file("menu.txt", ios::in);
    if(data_user_file.is_open())
    {
        while (getline(data_user_file, read))
        {
            typeOfFood = read.substr(0, read.find(','));
            read.erase(0, read.find(',') + 1);
            foodName = read.substr(0, read.find(','));
            read.erase(0, read.find(',') + 1);
            size = read.substr(0, read.find(','));
            read.erase(0, read.find(',') + 1);
            price = read.substr(0, read.find(','));
            read.erase(0, read.find(',') + 1);
            Food* temp = new Food(foodName, size, typeOfFood, price);
            menuList.push_back(temp);
        }
        data_user_file.close();
    }
}
void Menu::printMenu()
{
    for (auto x : menuList)
    {
        cout << x->getType() << " " << x->getFoodName() << " "
             << x->getSize() << " " <<  x->getPrice() << endl;
    }
}