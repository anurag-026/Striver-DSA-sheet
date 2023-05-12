#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int a[], int n)
{
    // code here
    int index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (a[index] != a[i])
        {
            a[++index] = a[i];
        }
    }
    return index + 1;
}

int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    int n = remove_duplicate(a, N);

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}