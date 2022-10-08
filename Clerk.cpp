#include "Clerk.h"

Clerk::Clerk(){
    this->position = "";
}

Clerk::Clerk(string firstname, string lastname, int age, string position): Person(string firstname, string lastname, int age){
    this->position = position;
}

string Clerk::getPosition(){return position;}

void Clerk::setPosition(string position){this->position = position;}