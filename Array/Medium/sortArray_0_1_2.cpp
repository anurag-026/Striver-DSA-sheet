#include <iostream>
using namespace std;
//Better Solution
void sort_array_0_1_2(int A[], int n)
{
    int i = 0, count_0 = 0, count_1 = 0, count_2 = 0;
    while (i < n)
    {
        if (A[i] == 0)
            count_0++;
        else if (A[i] == 1)
            count_1++;
        else if (A[i] == 2)
            count_2++;

        i++;
    }
    int count = count_0;
    for (i = 0; i < count; i++)
        A[i] = 0;

    count += count_1;
    for (i = count_0; i < count; i++)
        A[i] = 1;

    for (i = count; i < (count + count_2); i++)
        A[i] = 2;
}


//Three Pointer (Most optimised )
void sortArray(int nums[], int n) {    
        
        int low =0, mid = 0, high = n - 1;

        while(mid <= high){
            if(nums[mid] ==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else {
                swap(nums[mid] , nums[high]);
                high--;
            }
        }

    }


int main()
{
    int i, A[100], n;
    cout << " Enter number of elements present in the array: " << endl;
    cin >> n;
    cout << " Enter array:  " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << " Array after sorting : \n " << endl;
    sort_array_0_1_2(A, n);
    for (i = 0; i < n; i++)
    {
        cout << A[i] <<" ";
    }
    return 0;
}
