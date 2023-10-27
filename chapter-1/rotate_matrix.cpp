#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i; j < mat[0].size(); j++)
        {
            // int temp = mat[i][j];
            // mat[i][j] = mat[j][i];
            // mat[j][i] = temp;
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"--------------------------\n";
    rotate(mat);
}