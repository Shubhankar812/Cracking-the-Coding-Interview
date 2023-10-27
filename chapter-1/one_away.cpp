/*
There are 3 types of edits that can be performed on strings,
insert a char, remove a char, replace a char. Given 2 strings
write a function to check if they are one edit(or zero edits away)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    vector<int> dp(26, 0);

    for (char c : s)
    {
        dp[c - 'a'] += 1;
    }

    for (char c : t)
    {
        dp[c - 'a'] += 1;
    }

    int edit_count=0;

    for(auto it : dp) {
        if(it < 2 && it != 0) {
            edit_count++;
        }
    }
    // cout<<"Edit count is "<<edit_count<<"\n";
    if(edit_count<=1) {
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
}