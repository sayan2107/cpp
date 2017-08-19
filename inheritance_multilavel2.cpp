#include <iostream>
#include <string>

using namespace std;

class grandpa{
public:
     int age;
    mygrandpa(int a){age=a;}
};

class father : public grandpa{
public:
    string name;
    myfather(string s){name=s;}
};

class son : public father{
public:
    string blood;
    myson(string s){blood=s;}

    void display(){
        cout<<"age="<<age<<endl<<"name="<<name<<endl<<"blood grp="<<blood<<endl;

    }
};

int main()
{
    son sayan;
    sayan.mygrandpa(25);
    sayan.myfather("sayan");
    sayan.myson("AB");
    sayan.display();

 return 0;
}

