#include <bits/stdc++.h>
using namespace std;
void check(vector<vector<int>> &mat, vector<bool> &row, vector<bool> &col)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }
}
void transform(vector<vector<int>> &mat, vector<bool> &row, vector<bool> &col)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (row[i] == true || col[j] == true)
            {
                mat[i][j] = 0;
            }
        }
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
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    vector<bool> row(n, false);
    vector<bool> col(n, false);
    cout << "--------------------------\n";

    check(mat, row, col);
    transform(mat, row, col);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}