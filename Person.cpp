#include "Person.h"

Person::Person(){
    firstname = "";
    lastname = "";
    age = 0;
}

Person::Person(string firstname, string lastname, int age)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->age = age;
}



void Person::setFirstname(string firstname){
    this->firstname = firstname;
}

string Person::getLastname(){
    return this->lastname;
}

int Person::getAge(){return this->age;}

void Person::setAge(int age){
    this->age = age;
}


