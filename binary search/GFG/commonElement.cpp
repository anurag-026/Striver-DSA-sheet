
#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{

    vector<int> res;
    for (int i = 0, j = 0, k = 0; i < n1 && j < n2 && k < n3;)
    {
        int n= res.size();
        if ((A[i] == B[j] && A[i]== C[k]) ){
            if(n>=1 && ( res[n-1] == A[i]) ){
                continue;
            }
            else {
             res.push_back(A[i]);
             i++;j++;k++;
             continue;
             }
        }
        int maxi = max(A[i], max(B[j], C[k]));
        if (A[i] < maxi) 
            i++;
        if (B[j] < maxi)
            j++;
        if (C[k] < maxi)
            k++;
    }
    return res;
}

int main()
{
    int n1 = 6, n2 = 5, n3 = 8;
    int A[n1] = {1, 5, 10, 20, 40, 80};
    int B[n2] = {6, 7, 20, 80, 100};
    int C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> res = commonElements(A, B, C, n1, n2, n3);
    if (res.size() == 0)
        cout << -1;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";


    return 0;
}
