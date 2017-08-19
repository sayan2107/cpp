#include <iostream>

using namespace std;

int main()
{
    //take i/p of size arr A and B
    int n;
    cin >> n;
    int a[n],b[n],c[n];

    //taking a[] i/p
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    //taking b[] i/p
    for(int i=0;i<n;i++){
        cin >> b[i];
    }



    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
         cout << c[i] <<" ";
    }
    return 0;
}
