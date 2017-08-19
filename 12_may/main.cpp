#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++){

        // check for 6 consecutive similar numbers

        if(s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5]){

            cout << "Sorry, sorry!";
            return 0;
        }
    }

    cout << "Good luck!";

    return 0;
}
