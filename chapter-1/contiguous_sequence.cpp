#include <bits/stdc++.h>
using namespace std;

int solve_brute(vector<int> &arr)
{
    int n = arr.size();
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int j;
        for (j = i; j < n; j++)
        {
            sum += arr[j];
            mx = max(mx, sum);
        }
    }
    return mx;
}
int solve_optimal(vector<int> &arr)
{
    int n = arr.size();
    int mx = INT_MIN;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        mx = max(mx, sum);
    }
    return mx;
}
int sliding_window(vector<int> &arr)
{
    int n = arr.size();

    int curr_sum = 0;
    int start = 0, end = 0;
    int mx = -1e9;

    while (end < n)
    {
        curr_sum += arr[end];
        end++;

        if(curr_sum < 0){
            curr_sum = 0;
            start = end+1;
        }
        mx = max(mx,curr_sum);
    }
    return mx;
}
int main()
{
    int n;
    // cin >> n;

    vector<int> arr = {2, -8, 3, -2, 4, -10};
    // for(int i=0;i<n;i++) {
    //     cin>>arr[i];
    // }

    int res = sliding_window(arr);

    cout << res << "\n";
}