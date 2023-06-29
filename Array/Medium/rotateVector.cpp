#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> mat2;

    if (matrix.empty())
        return matrix;

    

    int i = 0, j = 0, k = 0;
    int n = matrix.size();
    for (i = 0; i < n; i++)
    {
        for (j = n - 1, k; j >= 0; j-- && k++)
        {
            mat2[i][k] = matrix[j][i];
        }
    }
    matrix = mat2;
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    matrix = rotate(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}