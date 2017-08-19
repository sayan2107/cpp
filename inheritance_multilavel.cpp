#include <iostream>
#include <string>

using namespace std;
class father{
public:
    int height;
    father(int h){
        height=h;
        cout << "height= "<<height<<endl;
        }
   };


class son : public father{
public:
    string color;

        son(int h,string c) : father(h){
        color=c;

        cout << "body color: "<<color<<endl;
        }
     };


     class sparm : public son{
 public:
    string blood;

    sparm(int h,string c,string s) : son(h,c){
    blood=s;
    cout << "blood: "<<blood<<endl;
    }
};


int main()
{ sparm s(28,"gray","ab");

 return 0;
}
