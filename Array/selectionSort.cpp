#include <bits/stdc++.h>

using namespace std;

int min(int *a, int i)
{
    int minimum = i;
    int n = sizeof(a) / sizeof(int);

    for (i; i < 5; i++)
    {
        if (a[minimum] > a[i])
            minimum = i;
    }
    return minimum;
}

int main()
{

    int a[6] = {10, 15, 1, 8, 7, 3};

    int n = sizeof(a) / sizeof(int);
    cout << n << " \n";
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = min(a, i);
        int temp;
        temp = a[i];
        a[i] = a[minimum];
        a[minimum] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}