#include <bits/stdc++.h>
using namespace std;

int isSubstring(string &s, string &t)
{
    int n = s.length();
    int m = t.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if(t[i+j] != s[j]) {
                break;
            }
        }
        if(j==m) {
            return i;
        }
    }
    return -1;
}
bool isRotated(string &s, string &t)
{

    int n = s.length();
    int m = t.length();
    if (n == m && n > 0)
    {
        string res = s + s;
        return isSubstring(res, t);
    }
    return false;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << isRotated(s1, s2) << "\n";
}