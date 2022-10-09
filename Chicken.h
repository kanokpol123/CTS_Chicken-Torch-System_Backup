#ifndef CHICKEN_H
#define CHICKEN_H


#include <iostream>
#include "Food.h"
using namespace std;

class Chicken : public Food {
    protected :
        string spiciness;

    public :
        void setSpiciness(string spiciness);
        string getSpiciness();    
};

#endif