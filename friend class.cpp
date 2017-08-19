 #include <iostream>
 #include <string>
//#include <stdexcept>

using namespace std;
//void iage(age a);

class human{
int count=0;
friend class secreat;
};

class secreat{
public:
    secreat(human man){
    cout<<"count value "<<man.count<<endl;
    }
};

int main()
{
    human sayan;
    secreat subho(sayan);
    //subho.show(sayan);

return 0;
}

