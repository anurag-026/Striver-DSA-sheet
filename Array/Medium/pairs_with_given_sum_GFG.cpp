/*

Given two unsorted arrays A of size N and B of size M of distinct elements, the task is to find all pairs from both arrays whose sum is equal to X.

Note: All pairs should be printed in increasing order of u. For eg. for two pairs (u1,v1) and (u2,v2), if u1 < u2 then
(u1,v1) should be printed first else second.

*/

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> allPairs_M1(int A[], int B[], int len_A, int len_B, int sum) // Method 1 T.C. =
{
    vector<pair<int, int>> fin_pairs;
    sort(A, A + len_A);
    sort(B, B + len_B, greater<int>());
    for (int indexA = 0; indexA < len_A; indexA++)
    {
        for (int indexB = 0; indexB < len_B; indexB++)
        {
            
            int tempSum = A[indexA] + B[indexB];
            if(tempSum < sum) break;
            if (tempSum == sum)
            {
                fin_pairs.push_back(make_pair(A[indexA], B[indexB]));
            }
        }
    }
    return fin_pairs;
}

int main()
{
    int N, M, X;
    cin >> N >> M >> X;
    int A[N], B[M];

    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < M; i++)
        cin >> B[i];

    vector<pair<int, int>> vp = allPairs(A, B, N, M, X);
    int sz = vp.size();
    if (sz == 0)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < sz; i++)
        {
            if (i == 0)
                cout << vp[i].first << " " << vp[i].second;
            else
                cout << ", " << vp[i].first << " " << vp[i].second;
        }
        cout << endl;
    }

    return 0;
}