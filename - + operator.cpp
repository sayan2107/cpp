 #include <iostream>
#include <stdexcept>

using namespace std;
class marks{
private:
    int intmark;
    int extmark;
public:
    marks(){
        intmark=0;
        extmark=0;
    }

    marks(int im,int em){
        intmark=im;
        extmark=em;
    }

    void display(){
    cout<<intmark<<endl<<extmark<<endl;
    }

    marks operator+(marks m){
    marks temp;
    temp.intmark = intmark + m.intmark;
    temp.extmark = extmark + m.extmark;

    return temp;
    }

    marks operator-(marks m);/*{
    marks temp;
    temp.intmark = intmark - m.intmark;
    temp.extmark = extmark - m.extmark;

    return temp;
    }*/

};

marks marks :: operator-(marks m){
    marks temp;
    temp.intmark = intmark - m.intmark;
    temp.extmark = extmark - m.extmark;

    return temp;
    }

int main()
{
    marks m1(10,20),m2(30,40);
    marks m3 = m1 + m2;
    m3.display();
    marks m4 = m1 - m2;
    m4.display();

return 0;
}

