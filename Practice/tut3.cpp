// Tutorial 2
#include <bits/stdc++.h>
using namespace std;

void tutorial_3(int a_0 , int n)
{
    int arr[n];

    arr[0] = a_0;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i - 1] + 1) % 10 != 0)
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1] + 2;
    }
    // cout<<setprecision(6);

    cout << "\nDataset: \n";
    for (auto i : arr)
        cout << i << " ";

    cout << "\n\n";

    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    float avg = sum / n;
    // Step 1
    cout << "Step 1:  Avg = " << sum << " / " << n << " = " << avg << "\n\n";
    // Step 2
    cout << "Step 2:                      step 3: Square \n";
    float add_sq = 0;
    for (int i = 0; i < n; i++)
    {
        float sub = arr[i] - avg;
        cout << arr[i] << " - " << avg << " = " << sub << " ---->    " << sub * sub << "\n";
        add_sq += sub * sub;
    }
    // Step 4
    cout << "\n Step 4 :  Add = " << add_sq << "\n\n";
    // Step 5
    cout << "Step 5 : " << n << " - 1 = " << n - 1 << "\n\n";
    n -= 1;
    float ans = add_sq / n;
    // Step 6
    cout << "Step 6 : square root( " << add_sq << " / " << n << " ) = " << sqrt(ans) << "\n\n";
}

int main()
{

    int n =20;
    int a_0 = 1231;
    //cout<<"No. of digits  \n";
    //cin>>n;
    //cout<<"First digit \n";
    tutorial_3(a_0 , n);

    return 0;
}