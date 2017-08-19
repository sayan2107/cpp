#include <iostream>
#include <string>

using namespace std;
class person{
public:
    person(){
    cout<<"constructor called"<<endl;
    }

    ~person(){
    cout<<"destructor is called"<<endl;
    }

};


int main()
{
    person *sayan;
    sayan=new person;
    delete sayan;

 return 0;
}


