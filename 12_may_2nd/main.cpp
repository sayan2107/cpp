#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    string s; cin>>s;  int cnt=0; int a[7]={0};
    //if(n<11) cout<<0;    a[7]={1,1,0,1,1,0,0}; cnt=1;
    //else{
        for(int i=0;i<n;i++){
            if(s[i]=='h') a[0]++;
            if(s[i]=='a') a[1]++;
            if(s[i]=='c') a[2]++;
            if(s[i]=='k') a[3]++;
            if(s[i]=='e') a[4]++;
            if(s[i]=='r') a[5]++;
            if(s[i]=='t') a[6]++;
        }
        a[0]/=2,a[1]/=2,a[4]/=2,a[5]/=2;
        cnt=a[0];
        for(int i=0;i<7;i++){
            if(cnt>a[i]) cnt=a[i];
        }
    //}
    cout<<cnt<<"\n";

    //cout << "Hello World!" << endl;
    return 0;
}
