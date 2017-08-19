#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//https://www.hackerearth.com/challenge/test/programming-practice-challenge/algorithm/c6f4c9b405004de4937dd5e641b1b2f8/

int main()
{
    int a,b,i,flag = 0,gcd;
    cin >> a;
    cin >> b;

   for(i=1; i<=a && i<=b; i++)
   {
       if(a%i == 0 && b%i == 0)
        gcd = i;
   }

   cout << gcd;

    return 0;
}
