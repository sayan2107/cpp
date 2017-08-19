#include <iostream>
#include <string>

using namespace std;

inline int large(int a,int b,int c){
   if(a>b && a>c)
    {return a;}
   else if(b>a && b>>c)
   {return b;}
   else
    return c;
}

int main()
{
    int x;
    x=large(9,6,7);
    cout<<"largest number  is "<<x<<endl;


return 0;
}

