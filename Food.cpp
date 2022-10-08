#include "Food.h"
using namespace std;

Food :: Food() {
    foodName = "";
    size = ' ' ;
    typeOfFood = "";
    price = 0;
}

Food :: setFoodName(string foodName) {
    foodName = foodName;
}