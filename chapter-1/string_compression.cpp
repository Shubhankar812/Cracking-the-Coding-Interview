#include <bits/stdc++.h>
using namespace std;

void solve(string &s, string &ans)
{

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1])
        {
            i++;
            count+=1;
        }
       ans+=s[i];
       ans+=to_string(count);
    }
    // cout << ans << "\n";
}
int main()
{
    string s;
    cin >> s;

    string result;
    solve(s, result);

    if (result.length() < s.length())
    {
        cout << result << "\n";
    }
    else
    {
        cout << s << "\n";
    }
    return 0;
}