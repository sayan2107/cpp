#include <iostream>
#include <exception>

using namespace std;



int main()
{
    int a=10,b=0,c;
    try{
        if(b==0)
            throw "divide by zero error";
    c=a/b;
    cout<<c<<endl;
    }catch(const char *e){
    cout<<"exception occoured"<<endl<<e;
    }
return 0;
}

