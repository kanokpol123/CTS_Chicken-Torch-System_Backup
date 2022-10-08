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