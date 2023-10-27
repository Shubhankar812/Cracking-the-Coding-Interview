/*
Given a string , check if it's palindrome is a permutation of original string. 
*/
#include <bits/stdc++.h>
using namespace std;

bool check(string &s, string &t)
{
    vector<int> temp(26, 0);
    bool flag = false;
    if (s.length() != t.length())
    {
        return false;
    }
    for (char c : s)
    {
        temp[c - 'a']++;
    }
    for (char c : t)
    {
        temp[c - 'a']++;
    }

    for (auto it : temp)
    {
        if (it >= 2)
        {
            flag = true;
        }
        
    }
    return flag;
}
int main()
{
    string s, t;
    cin >> s;
    t = s;
    
    reverse(t.begin(),t.end());
    
    if (check(s, t))
    {
        cout << "is a Permutation\n";
    }
    else
    {
        cout<<"not a permutation\n";
    }
}