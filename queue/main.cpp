#include <iostream>


using namespace std;

class ope{
public:

    int* top = -1;
    int* stk[50];


    void push(){
        if(top==49)
            cout<<"Stack is full"<<endl;
            else{
            cout<<"Enter a value ---> ";
            cin>>stk[++top];
     }
    }


    void pop(){
        if(top==-1)
            cout<<"\nStack is empty.Nothing to pop"<<endl;
        else{
        cout<<"\nvalue to be popped is "<<stk[top]<<endl;
        top--;
     }
    }


    void display(){
        if(top==-1)
            cout<<"Stack is empty"<<endl;
        else{
                cout<<"------your list------\n";
        for(int i=top;i>=0;i--)
                cout<<stk[i]<<endl;

    }
 }
};




int main()
{

    int triger;
    while(1){

    cout<<"\n\n1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.display\n";
    cout<<"choose any operation --> ";
    cin>>triger;

    ope o;


    switch(triger){
    case 1:
              o.push();
               break;


    case 2:
              o.pop();
              break;



    case 3:
             o.display();
             break;

    default: cout<<"Invalid choice"<<endl;
     }

}

    return 0;
}
