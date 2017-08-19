#include <iostream>
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monks-love-for-food/

//my comment link
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monks-love-for-food/?scroll-id=comments-183-15634&scroll-trigger=inview#c97855
using namespace std;

int main()
{
    int n,q,cost,top = -1;
    int stack[8000] = {0};
    cin >> n;
   //say n=6
    while(n--){
    //enter query i/p
    cin >> q;

    //if q=1 then coustomer query
    if(q == 1){
            if(top == -1)
              cout << "No Food" << endl;
           else{
              cout << stack[top] << endl;
              top--;
           }
    }else if(q == 2){ //q=2 then chefs query,take i/p of food price
        cin >> cost;
        top++;
        stack[top] = cost;
     }

    }//end while



    return 0;
}
