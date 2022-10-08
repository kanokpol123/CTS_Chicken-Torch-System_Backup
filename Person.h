#include <string>

using namespace std;
    

class Person
{
//Person Attributes.
protected:
string firstname;
string lastname;
int age;
public:
//Person Method.
    Person();
    Person(string firstname, string lastname, int age);
    string getFirstname();
    void setFirstname(string firstname);
    string getLastname();
    void setLastname(string lastname);
    int getAge();
    void setAge(int age);
};
