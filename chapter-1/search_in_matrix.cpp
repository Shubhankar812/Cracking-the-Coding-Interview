#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> &mat,pair<int,int> &p,int target)
{
    int i = 0, j = mat[0].size() - 1;
    bool check = false;

    while (i < mat.size() && j >= 0)
    {
        if(mat[i][j] == target) {
            p = make_pair(i+1,j+1);
            check = true;
            return true;
        }
        else if(mat[i][j] > target) {
            j--;
        }
        else{
            i++;
        }
    }
    if(!check) {
        p = make_pair(-1,-1);
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int tgt;
    cin>>tgt;
    pair<int,int> p;

    if(search(mat,p,tgt)) {
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n";
    }

    cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}