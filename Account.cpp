#include "Account.h"

Account::Account(){
    username = "";
    password = "";
    address = "";
    signedDate = "";
    privilege = '';
}

Account::Account(string username, string password, string address, string signedDate,char privilege)
{
    this->username = username;
    this->password = password;
    this->address = password;
    this->signedDate = signedDate;
    char privilege = privilege;
}

string Account::getUsername(){return username;}

void Account::setUsername(string username){this->username = username;}

string Account::getPassword(){return password;}

void Account::setPassword(string password){this->password = password;}

string Account::getSignedDate(){return signedDate;}

void Account::setSignedDate(string signedDate){this->signedDate = signedDate;}

string Account::getPrivilege(){return privilege;}

void Account::setPrivilege(string pri){this->privilege = privilege;}