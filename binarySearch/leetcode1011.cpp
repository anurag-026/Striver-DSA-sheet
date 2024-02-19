#include <bits/stdc++.h>
using namespace std;

int dayCount(vector<int> &weights, int mid)
{
    int days = 0;
    long long count = 0;
    for (int i = 0; i < weights.size(); i++){
        count += weights[i];
        if (count <= mid)
            continue;
        else{
            days += (double)count / (double)mid;
            count = 0;
            i--;
        }
        
    }
    days += (double)count / (double)mid;
    return days;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = 0;
    for (int i = 0; i < weights.size(); i++)
        high += weights[i];

    int mid = low;

    while (low <= high){

        int tdays = dayCount(weights, mid);
        if (tdays > days) {
            low = mid + 1;
        }
        else if (tdays == days)
            return mid;
        else {
            high = mid - 1;
        }
    }
    return mid;
}

int main(){

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    
     int days=5;
     cout<<shipWithinDays(weights , days);
}