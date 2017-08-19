#include <iostream>
#include <string>

using namespace std;

void display();


int main()
{
  display();
  display();
  display();
 return 0;
}


void display(){
static int counter = 0;
cout<<"display func called "<<++counter<<" times"<<endl;
}

