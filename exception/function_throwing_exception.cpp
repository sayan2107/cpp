#include <iostream>
#include <stdexcept>

using namespace std;

void test() throw(int,char,runtime_error){
    //throw 20;
    throw runtime_error("nice");

}


int main()
{
 try{
     test();
}catch(int error){
    cout<<" integer type "<<error<<endl;

}catch(char e){
    cout<<" integer type "<<e<<endl;
}catch(runtime_error err){
    cout<<" integer type "<<err.what()<<endl;
}


return 0;
}

