#include <iostream>
#include<Windows.h>

using namespace std;
int top=-1;

class ope{
  public:

     int push(int *addr,int n){
        if(top==n-1)
            cout<<"Stack is full"<<endl;
            else{
            cout<<"Enter a value ---> ";
            cin>>addr[++top];
      }

      return(top);
    }


     int pop(int top){
        if(top==-1)
            cout<<"\nStack is empty.Nothing to pop"<<endl;
        else{
        cout<<"\nvalue popped"<<endl;  //stk[top]<<endl;
        top--;
     }
     return(top);
    }


    void display(int top,int top1){
        if(top==-1 || top1==-1)
            cout<<"Stack is empty"<<endl;
        else{
                cout<<"------your list------\n";
        for(int i=top;i>=0;i--)
                cout<<*addr[i]<<endl;

    }
 }

};

int main()
{
    int arr[],i,triger;
    int n=sizeof(arr)/sizeof(arr[0]);
    int* addr=arr;

    while(1){

    cout<<"\n\n1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.display\n";
    cout<<"choose any operation --> ";
    cin>>triger;


    switch(triger){
    case 1:
              int top=o.push(*addr,n);
               break;


    case 2:
              int top1=o.pop(top);
              break;



    case 3:
             o.display(top,top1);
             break;

    default: cout<<"Invalid choice"<<endl;
     }

}



   return 0;
}
