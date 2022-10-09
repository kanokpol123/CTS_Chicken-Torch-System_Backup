#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include "Account"

using namespace std;

class Customer : public Person
{
//Customer Attributes.
protected:
string address;
string telephone;
Customer custAccount;

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

#endif