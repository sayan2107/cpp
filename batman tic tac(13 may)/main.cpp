#include <iostream>

using namespace std;

//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/batman-and-tick-tack-toe/description/

int main()
{
    char x[50][50];
    int b[50][50];
    int n,a;
    cin >> n;
    while(n--)
    {
    //taking i/p
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            cin >> x[j][i];
        }
    }

    //printing the matrix
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            cout << x[j][i];
        }
        cout << "\n";
    }

    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            int c=x[j][i];
            b[j][i]=c;
            cout << b[j][i];
        }
        cout << "\n";
    }


    //checking
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
               //b[j][i]=x[j][i];
          if(b[j][i] == 120 && b[j][i+1] == 120 && b[j][i+2] == 46 && b[j][i+3] == 46)
            cout << "YES";
          else
            cout << "NO";
        }

        //if(x[j][i]==x[j++][i])

    }

    }


    return 0;
}
