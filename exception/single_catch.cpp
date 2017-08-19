#include <iostream>
#include <stdexcept>

using namespace std;



int main()
{

try{
    //throw runtime_error("runtime error");
    throw 20;
    //throw "any error";
}
catch(runtime_error e){
    cout<<e.what()<<endl;

}

catch(...){
    cout<<"any exception occoured"<<endl;
}

return 0;
}

