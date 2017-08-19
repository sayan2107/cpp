#include <iostream>
#include <stdio.h>
#include <string.h>

int takeip();
void check();
using namespace std;


//taking ip
int takeip(){
int a;
cout << "Enter a number :"<<endl;
cin >> a;
return a;
}


//checking condition
void check(int x){
    int i, flag=0;
for(i=2; i < x; i++){
    if(x % i == 0)
     flag++;
    }

   if(flag==0)
      cout<<"prime number"<<endl;
    else
      cout<<"not prime number"<<endl;
}


int main()
{
    int x=takeip();
    check(x);

	return 0;
}



