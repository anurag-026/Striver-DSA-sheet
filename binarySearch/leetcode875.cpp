#include <bits/stdc++.h>
using namespace std;

int req_time(vector<int> &piles, int h)
{
    int count = 0;
    for (int i = 0; i < piles.size(); i++)
    { // i
        if (piles[i] <= h)
            count++;
        else if (piles[i] > h)
        {
            count += (piles[i] / h);
            if ((piles[i] % h) != 0)
                count++;
        }
    }
    return count;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int high = *max_element(piles.begin(), piles.end());
    int count = high;
    int reqTime;
    int low = 1, mid = low; 

    if (piles.size() == h)
        return high;

    while(low <= high)
    {
        reqTime = req_time(piles, mid);
        if (reqTime <= h){

            if (count > mid)
                count = mid;

            high = mid-1;

        }
        else if (reqTime > h){
            low=mid+1;
            
        }  
        mid = (low + high )/2;
    }

    return count;
}

int main()
{

    vector<int> piles = {30, 11, 23, 4, 20};

    int h = 6;

    cout << minEatingSpeed(piles, h);
}