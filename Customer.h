#include "Person.h"
using namespace std;

class Customer : public Person{
//Customer Attributes.
protected:
string address;
string telephone;
//Account CusAccount
public:
//Customer Methods.
Customer();
Customer(string firstname, string lastname, int age, string address, string telephone);
string getAddress();
void setAddress(string address);
string getTelephone();
void setTelephone(string telephone);
void regis(string username, string password, string name, string address, string telephone);
};
