#include <iostream>
#include <string>

using namespace std;
int input();
void print(int b);


int main()
{
    int a;
  a=input();
  print(a);

 return 0;
}

int input(){
    int x,i,temp,*a;
    cout<<"how many numbers?"<<endl;
    cin>>x;
    a=new int[x];
    for(i=1;i<=x;i++){
        cout<<"Enter element number "<<(i)<<endl;
        cin>>temp;
        *(a+i)=temp;

    }
    return(x);

}

void print(int b){
    int i,*a;
        cout<<"your arrey is"<<endl;
    for(i=1;i<=b;i++){
        cout<<*(a+i)<<endl;
    }

}

