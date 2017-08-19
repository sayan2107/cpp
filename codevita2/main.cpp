#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,m,sum=0,product;
    cin >> n;
    cin >> m;
    int arr1[n], arr2[n], arr3[n], arr4[n];

    for(int i = 0; i<n; i++)
    {
        cin >> arr1[i];
    }

    for(int i = 0; i<n; i++)
    {
        cin >> arr2[i];
    }

    /*5 3
      2 2 5 3 1
      2 7 -2 2 3
    */

    for(int i=0; i<n; i++)
    {
        if(arr1[i] < 0 && arr2[i] < 0){
            product = (arr1[i]+m*2)*arr2[i];

        }else if(arr1[i] > 0 && arr2[i] < 0){

        }else if(arr1[i] < 0 && arr2[i] > 0){

        }else{

        }
    }



    return 0;
}
