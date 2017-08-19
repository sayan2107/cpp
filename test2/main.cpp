#include <iostream>

using namespace std;
int main()
{
	int x[5][2] = {{0,0},{25,5},{26,8},{58,554},{54,85}};
	int i,j;
	for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            cout << "x[" << i <<"]"<<"["<<j<<"]"<<"=";
            cout << x[i][j] <<endl;
        }
	}


	return 0;
}
