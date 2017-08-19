#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l,n,w,h,i;
   cin>>l;
   cin>>n;
   for(i=1;i<=n;i++){
        cout<<"WIDTH:";
        cin>>w;
       cout<<"HEIGHT:";
       cin>>h;
       if(w<l || h<l){
        cout<<"upload another"<<endl;
       }else if(w==l && h==l){
           cout<<"accepted"<<endl;
       }else
       cout<<"crop it";
   }



  return 0;
}
