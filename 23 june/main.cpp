#include <iostream>

using namespace std;

int main()
{
    int n,flag = 0,fl[50],j=0;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

     //10
     //1 1 1 1 1 0 0 0 1 1   -> 5
    for(int i=1; i<=n; i++)
    {
        if(a[i] == 1 && a[i-1] == 1){
            flag++;
        }else{
            fl[j] = flag;
            j++;
            flag = 0;
            continue;

        }
    }

    for(int i=0;i<2;i++)
        cout << fl[i] << " ";

    //cout << "Hello world!" << endl;
    return 0;
}
