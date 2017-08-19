#include<bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/description/
int main()
{
    int n,d;
    cin>>n>>d;

    bool flag=false;
    int ans=0;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    for(int i=0;i<n;i++)
    {
        if(vec[i]>d)
        {
            if(flag==false)
            {
                flag=true;
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
