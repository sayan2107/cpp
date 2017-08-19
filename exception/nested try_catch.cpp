#include <iostream>
#include <stdexcept>

using namespace std;



int main()
{
 try{
     try{
         throw "a char exception";
     }catch(const char *e){
     cout<<"char type in inner block -->"<<e<<endl;
     cout<<"rethroughing exception"<<endl;
     throw runtime_error("kalabo");
     throw;
  }

 }catch(const char *e){
     cout<<"char type in outer block -->"<<e<<endl;
 }
 catch(...){
     cout<<"unexpected type error in outer block -->"<<endl;
 }


return 0;
}

