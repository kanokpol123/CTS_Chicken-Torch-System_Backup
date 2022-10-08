#include "Customer.h"

Customer::Customer()
{
    address = "";
    telephone = "";
}

Customer::Customer(string firstname, string lastname, int age, string address, string telephone) : Person(firstname,lastname,age)
{
    this->address = address;
    this->telephone = telephone;
}

string Customer::getAddress(){ return address;}

void Customer::setAddress(string address){this->address = address;}

string Customer::getTelephone(){return telephone;}

void Customer::setTelephone(string telephone){this->telephone = telephone;}

void regis(string username, string password, string name, string address, string telephone)
{
    //เพิ่มโค้ด Register ตรงนี้ Vvvvvvvvv
}