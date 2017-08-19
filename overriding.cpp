#include <iostream>
#include <string>

using namespace std;

class father{
private:
    int age;
    string name;
public:
myfather(int a,string s){
    age=a;
    name=s;
}
void display(){
cout<<"name is "<<name<<" age is "<<age<<endl;
}
};

class son : public father{
private:
    string blood;
public:
    myson(string s){
    blood=s;
    }

void display(){
cout<<"blood grp is "<<blood<<endl;
}
};


int main()
{
   son sayan;
   sayan.myson("AB");
   sayan.myfather(45,"sukhen");
   sayan.display();

 return 0;
}

