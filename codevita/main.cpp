#include <iostream>
using namespace std;

int main()
{
    int space, rows, m = 3, n = 2, x, flag=0, z;

    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != i)
        {
            x = m * n;
            z = x;
            while(z!=0)
            {
                z = z / 10;
                flag++;
            }

            if(flag == 1)
                cout <<"0000"<< x << " ";
            else if(flag == 2)
               cout << "000" << x << " ";
            else if(flag == 3)
               cout << "00" << x << " ";
            else if(flag == 4)
               cout << "0" << x << " ";
            else
                cout << x << " ";

           // cout << x << " ";
            m = m+4;
            n = n+2;
            flag = 0;
            ++k;
        }
        cout << endl;
    }
    return 0;
}
