#include <iostream>
#include <stdexcept>

using namespace std;



int main()
{
    int a=10,b=0,c;
    try{
        if(b==0)
        throw runtime_error {"divide by zero error"};
    c=a/b;
    cout<<c<<endl;
    }catch(runtime_error &e){
        cout<<"exception occoured"<<endl;
        cout<<e.what();
    }

return 0;
}

