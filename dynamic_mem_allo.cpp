#include <iostream>
#include <string>

using namespace std;




int main()
{
    int i,limit,*a,temp;

  cout<<"how many numbers you want in your array?"<<endl;
  cin>>limit;
  a=new int[limit];


  for(i=1;i<=limit;i++){
    cout<<"enter element number "<<i<<endl;

    cin>>temp;
    *(a+i)=temp;

  }
cout<<"you have entered"<<endl;
  for(i=1;i<=limit;i++){
    cout<<*(a+i)<<endl;

  }

  delete []a;
 return 0;
}


