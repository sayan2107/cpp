#include<bits/stdc++.h>
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-shino-and-coins-3/description/

using namespace std;
int k;
string st;
int cnt[1000];
int ans;
int main(){
	cin >> k;
	cin >> st;
	for (int l = 0; l < st.size(); l++)
	{
		for (int i = 'a'; i <= 'z'; i++)
		{
			cnt[i] = 0;
		}
		int dif = 0;
		for (int r = l; r < st.size(); r++)
		{
			cnt[st[r]]++;
			if (cnt[st[r]] == 1)
				++dif;
			if (dif == k)
				++ans;
		}
	}
	cout << ans << endl;
	return 0;
}
