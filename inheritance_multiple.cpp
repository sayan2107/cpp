#include <iostream>
#include <string>

using namespace std;

class father{
public:
    int age;
    getfather(int a){
    age=a;
    cout<<"age is "<<age<<endl;
    }
};

class mather{
public:
    string blood;
    getmather(string s){
    blood=s;
    cout<<"blood grp  is "<<blood<<endl;
    }
};

class son : public father,public mather{
public:
    getson(){

    cout<<"my parents are very good"<<endl;
    }

};

int main()
{
 son sayan;
 sayan.getfather(20);
 sayan.getmather("ab");
 sayan.getson();

 return 0;
}

