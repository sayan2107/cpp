#include <iostream>
#include <string>

using namespace std;

class play{
    public:
play(){cout<<"No parameter passed"<<endl;}

play(int x){cout<<"one integer type parameter passed which is "<<x<<endl;}

play(int b,string y){cout<<"one integer type "<<b<<" one string type "<<y<<endl;}

play(string a){cout<<"one string type passed "<<a<<endl;}

};


int main()
{
    play virat;
    play sachine(26);
    play v(24,"virat");
    play vira("four");

 return 0;
}

