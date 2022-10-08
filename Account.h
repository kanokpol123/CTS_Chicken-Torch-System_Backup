#include <string>

class Account
{
private:
    string username;
    string password;
    string address;
    string signedDate;
    char privilege
public:
    Account();
    Account(string username, string password, string address, string signedDate,char privilege);
    string getUsername();
    void setUsername(string username);
    string getPassword();
    void setPassword(string password);
    string getAddress();
    void setAddress(string address);
    string getSignedDate();
    void setSignedDate(string signedDate);
    char getPrivilege();
    void setPrivilege(char pri);
};

