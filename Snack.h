#include <iostream>
#include "Food.h"
using namespace std;

class Snack : public Food {
    protected :
        string typeOfSnack;

    public :
        void setTypeSnack(string typeOfSnack);
        string getTypeSnack();    
};