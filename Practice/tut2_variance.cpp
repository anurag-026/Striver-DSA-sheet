#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 20;
    int arr[n] ;//={3,21,98, 203,17,9};
    
    arr[0] = 2973;

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

    //Step 1
    double sum1=0;
    for(int i=0; i<n; i++){
        sum1 = sum1+arr[i];
    }
    
    cout<<setprecision(3);
    cout<<fixed<<"Step 1: Add the Data = "<<sum1<<"\n\n";

    double sqDataset = sum1*sum1;
    cout<<fixed<<"Step 2: Square the data = "<< sqDataset <<"\n\n";

    double div = sqDataset/n;
    cout<<fixed<<"Step 3: "<<sqDataset<<" / "<<n<<" = "<<div<<"\n\n";

    int sum=0;
    for(int i=0; i<n; i++){
        int square = arr[i] *arr[i];
        sum+=square;
    }
    cout<<"Step 4: Square each and every data and add = "<<sum<<"\n\n";
    double sub = sum - div;
    cout<<"Step 5: "<<sum<<" - "<<div<<" = "<<sub<<"\n\n";

    cout<<"Step 6: " <<n<<" - 1 = " << n-1<<"\n\n";
    double ans = sub/(n-1);
    cout<<"Step 7: "<<sub<<" / "<<n-1<<" = "  <<ans<<"\n\n";

    //cout<<"Step 8: Square root of ( "<<ans<<" ) = "   <<sqrt(ans)<<"\n\n";
    

    




    return 0;
}