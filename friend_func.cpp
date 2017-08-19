#include <iostream>
#include <string>

using namespace std;

class human{
    private:
        int h;
        string name;
    public:
        beinghuman(string n,int m){
            name=n;
            h=m;
    //cout<<name<<endl<<h<<endl;
}

friend void gethuman(human man);
};

void gethuman(human man){
cout<<man.name<<endl<<man.h<<endl;
}

int main()
{
    human sayan;
    sayan.beinghuman("sayan",6);
    gethuman(sayan);

 return 0;
}

