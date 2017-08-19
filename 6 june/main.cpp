#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//https://www.hackerearth.com/challenge/hiring/altimetrik-java-hiring-challenge/algorithm/milly-and-pens/
using namespace std;

int main()
{

    int t,n,p,m,i, c, d, length;

    //no of test cases
    cin >> t;
    while(t--)
    {
        int  flag = 0,count = 0;

        //no of unique pens
        cin >> n;

        //no of pens needed by pranjal
        cin >> p;

        //no of pens needed by milly
        cin >> m;

        //declare required array
        int arr1[p+m];
        int arr2[p+m];

        //take pen ids of p in array arr1
        for(i=0; i<p; i++){
            cin >> arr1[i];
        }

        //taking pen ids of m and appending same arr1[]
        for(i=p; i<m+p; i++){
            cin >> arr1[i];
        }


        length = sizeof(arr1)/sizeof(arr1[0]);

        //test i/p
        /*
        1
        4 2 2
        1 2
        3 4
        */

        //For removing duplicate elements from arr1[] and store them in arr2[]

       for(c=0;c<length;c++)
    {
        for(d=0;d<count;d++)
        {
            if(arr1[c]==arr2[d])
                break;
        }
        if(d==count)
        {
            arr2[count] = arr1[c];
            count++;
        }
    }




    for(c=0; c<count; c++){
          //  cout << arr2[c];
        flag++;
    }



    if(n <= flag)
        cout << "They can" <<endl;
        else
        cout << "They can't" <<endl;



    }//end of while

    return 0;
}
