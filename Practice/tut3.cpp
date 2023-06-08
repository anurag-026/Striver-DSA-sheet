//Tutorial 2

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 20;

    int arr[n];

    arr[0] = 4561;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i - 1] + 1) % 10 != 0)
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1] + 2;
    }

    cout << "\nDataset: \n";
    for (auto i : arr)
        cout << i << " ";

    cout << "\n\n";

    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    float avg = sum / n;
//Step 1
    cout << "Step 1:  Avg = " << sum << " / " << n << " = " << avg << "\n\n";
//Step 2
    cout << "Step 2:                              step 3: \n";
    float add_sq = 0;
    for (int i = 0; i < n; i++)
    {
        float sub = arr[i] - avg;
        cout << arr[i] << " - " << avg << " = " << sub << " ---->   Square " << sub * sub << "\n";
        add_sq += sub * sub;
    }
//Step 4
    cout << "\n Step 4 :  Add = " << add_sq << "\n\n";
//Step 5
    cout << "Step 5 : " << n << " - 1 = " << n - 1 << "\n\n";
    n -= 1;
    float ans = add_sq / n;
//Step 6
    cout << "Step 6 : square root( " << add_sq << " / " << n << " ) = " << sqrt(ans) << "\n\n";

    return 0;
}