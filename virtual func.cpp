#include <iostream>
#include <string>

using namespace std;

class base{
public:
    void disp(){cout<<"in base class disp"<<endl;}
    virtual void show(){cout<<"Base class show"<<endl;}
};

class derived : public base{
public:
    void disp(){cout<<"derived class disp"<<endl;}
    void show(){cout<<"derived class show"<<endl;}
};



int main()
{
    base *p=new base;
   // base b;


    //p=&b;
    p->disp();
    p->show();


    derived d;
    p=&d;
    p->disp();
    p->show();

    //d.disp();
    //d.show();

return 0;
}

