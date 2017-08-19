#include <iostream>
#include <algorithm>
//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/akash-and-the-assignment-1-12/

using namespace std;
int main()
{
    int n,q1,i,l,r,q;

    //string size
    cin >> n;

    //no of queries
    cin >> q1;

    string a;

    //taking string i/p
    for(i=0; i<n; i++){
        cin >> a[i];
    }


    while(q1--){
    //i/p l,r,q
     cin >> l;
     cin >> r;
     cin >> q;

     //int array to store ASSCI value of chars
     int b[r-l];

     if(q>r)
        cout << "Out of range" <<endl;
     else
     {
     //say string is 'abcdef'
     //say i/p is l=2 r=6 q=3

     int j=0;
     for(i=(l-1); i<(r-1); i++){
            b[j]=a[i];
            j++;
     }

    //sorting the ASSCI values
    sort(b, b + (r-l));

    //convert the ASSCI to character value
    char val=b[q-1];

    //result
    cout << val << endl;

     }//end of else

    }//end of while

    return 0;
}
