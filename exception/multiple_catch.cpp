#include <iostream>
#include <stdexcept>

using namespace std;



int main()
{

try{
    throw runtime_error("runtime error");
    //throw 20;
    //throw "any error";
}catch(const char *e){
    cout<<e<<endl;
}
catch(int error){
    cout<<error<<endl;
}
catch(runtime_error err){
    cout<<err.what()<<endl;
}
return 0;
}

