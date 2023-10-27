#include <bits/stdc++.h>
using namespace std;

int size(int n)
{
    int sz = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sz++;
        n /= 10;
    }
    return sz;
}
string convert(int n,unordered_map<int,string> mp)
{
    string ans = "";

    int length = size(n);
    string units = "";
    string tens = "";
    string hundreds = "";
    // string thousands = "";

    if (length == 1)
    {
        return mp[n];
    }

    if(length == 2) {
       
    }

}
int main()
{
    int n;
    cin >> n;
    unordered_map<int, string> mp;
    mp.insert({1, "one"});
    mp.insert({2, "two"});
    mp.insert({3, "three"});
    mp.insert({4, "four"});
    mp.insert({5, "five"});
    mp.insert({6, "six"});
    mp.insert({7, "seven"});
    mp.insert({8, "eight"});
    mp.insert({9, "nine"});
    mp.insert({0, "zero"});


}