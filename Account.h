#include "Customer.h"

class Account : public Customer{
//Customer Attributes.
protected:
string username;
string password;
string address;
string signedDate;
char privilege;
//Account CusAccount
public:
//Customer Methods.
Account();
//Account(string firstname, string lastname, int age, string address, string telephone);
string getUsername();
void setUsername(string username);
string getAddress();
void getAddress(string address);
string getSignedDate();
void setSignedDate(string telephone);
void regis(string username, string password, string name, string address, string telephone);
};
