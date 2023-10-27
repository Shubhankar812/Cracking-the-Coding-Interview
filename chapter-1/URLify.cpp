#include <bits/stdc++.h>
using namespace std;

vector<string> store;
void solve(string &s)
{

    string ans;
    int n = s.length();

    string word="";
    for(auto x : s) {
        if(x==' ') {
            cout<<word<<"\n";
            word="";
        }
        else{
            word+=x;
        }

    }
    cout<<word<<"\n";
    // return ans;
}
int main()
{
    string ip;
    cin >> ip;

    // string res = solve(ip);
    solve(ip);

    // cout << res << "\n";

    // for (auto it : store)
    // {
    //     cout << it << "\n";
    // }
}