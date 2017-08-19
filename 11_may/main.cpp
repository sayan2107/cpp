#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int next(int a);


int main()
{
    int n,no_char,i,x,ne;
    char a[600];
  cin >> n;
  while(n--){
    cin >> no_char;
    cin >> a;
    for(i=0;i<no_char;i++){
        x=a[i];
        ne=next(x);
        a[i]=ne;
    }
    puts(a);
  // cout << a;
  }
    return 0;
}


int next(int a)
{
    int ans,d1,d2,i;
    int prime[12] = {67,71,73,79,83,89,97,101,103,107,109,113};

        if(a<=67)
            return 67;
            else if(a>=113)
                return 113;
            else
            {
                for(i=0;i<12;i++){
                        if(prime[i]>a){
                             d1=prime[i]-a;
                             d2=a-prime[i-1];
                if(d1<d2)
                     return (prime[i]);
                    else
                     return (prime[i-1]);
                }
            }

    }
}

