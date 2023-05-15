#include <bits/stdc++.h>
using namespace std;

int majorityElement_M1(int a[], int size)  // Better Solution
{
    // your code here
    unordered_map<int, int> mpp;
    for (int index_a = 0; index_a < size; index_a++)
    {
        mpp[a[index_a]] += 1;
    }

    for (auto i : mpp)
    {
        if (i.second > (size / 2))
            return i.first;
    }
    return -1;
}

int majorityElement_M2(int a[], int size)  //Optimal Solution
{
    int count = 0;
    int element;
    for (int i = 0; i < size; i++){

        if (count == 0)
            element = a[i];

        if (element == a[i])
            count++;

        else
            count--;
    }

    count = 0;
    for (int i = 0; i < size; i++){        
        if (a[i] == element)        
            count++;        
    }

    if (count > size / 2)
        return element;

    else
        return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << majorityElement_M1(arr, n) << endl;
    return 0;
}
