#include <iostream>
using namespace std;

class Food {
    protected :
        string foodName;
        char size;
        string typeOfFood;
        int price;

    public :
        Food();
        void setFoodName(string foodName);
        string getFoodName();
        void setSize(string size);
        char getSize();
        void setType(string type);
        string getType();
        void setPrice(int price);
        int getPrice();
};