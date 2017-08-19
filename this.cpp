#include <iostream>
#include <string>

using namespace std;


class person{
private:
    int age;     //only member functions of a class have this keyword
public:
    void setage(int age){this->age=age;}

    void showage(){cout<<this->age<<endl;}
};


int main()
{
    person sayan;
    sayan.setage(24);
    sayan.showage();


return 0;
}

