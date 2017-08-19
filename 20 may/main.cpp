#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //number of i/p
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    //say i/p ---> 1 1 1 2 2
            //a[0]a[1]a[2]a[3]a[4]

    int flag = 0,test,c[50],b;
    for(int i=0; i<n; i++){
            test = a[i];
        if(test == a[i]){
            flag++;
            if(i == n-1){
                b = flag;
                for(i=)
                fgets(c+1) = b;
                fgets(c) = test;
                test = a[i+1];
            }
        }
        else
           continue;
    }

    for(int i = 0; i<c.size(); i++){

        if(i%2 == 0)
            continue;
        else{
        if(c[i] > c[i+2])
            cout << c[i-1];
            }
    }

    return 0;

}
