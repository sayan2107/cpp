#include <iostream>
//#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n,min,max,flag=0;
    cin>>n; //size of arr

    int a[n]; //a[5]
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
   min = a[0];
   max = a[0];

     for(int i=0;i<n;i++){
      if(a[i] < min)
        min = a[i];
      else if(a[i] > max)
        max = a[i];
    }

// 7 8 9 10 11 12

    for(int j = min; j < max; j++){
       for(int i=0;i<n;i++){
        if(j==a[i]){
            flag++;
            break;
        }else
            continue;
      }
    }

   // cout << flag;

    if(flag == (max-min))
     cout << "YES";
     else
        cout << "NO";

    return 0;
}
