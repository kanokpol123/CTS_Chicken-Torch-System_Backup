#include "Person.h"
using namespace std;

class Clerk : public Person
{
protected:
    string position;
public:
    Clerk();
    Clerk(string firstname, string lastname, int age, string position);
    string getPosition();
    void setPosition(string position);
};
