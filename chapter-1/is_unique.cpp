/*
Implement an algorithm to determine if a string has
all unique characters.
*/

/*
1) Brute Force Approach :
   using 2 for loops; TC = O(n^2)
2)
    sorting string and then iterating over it; TC = O(nlog(n))
3)
    Using hashing; TC = O(n) & SC = O(n)
*/
#include <bits/stdc++.h>
using namespace std;

bool check(string &s)
{
    int n;
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string s;
    cin >> s;

    if (check(s))
    {
        cout << "All unique chars\n";
    }
    else
    {
        cout << "There are some duplicate elements\n";
    }
}