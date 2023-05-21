#include <bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int start, int end)
{

	if (end <= start)
		return 0;

	int profit = 0;

	for (int i = start; i < end; i++)
	{
		for (int j = i + 1; j <= end; j++)
		{
			if (price[j] > price[i])
			{
				int curr_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);
				profit = max(profit, curr_profit);
			}
		}
	}
	return profit;
}

void stockBuySell(int price[], int n)
{
	maxProfit(price, 0, n - 1);
}

//-------------------------------------------------

void stockBuySell_M2(int price[], int n)
{

	int buy = price[0], sell, diff, maxD = INT_MIN, start = 0, ansE;
	for (int i = 1; i < n; i++)
	{
		diff = price[i] - buy;

		if (diff < 0)
		{
			buy = price[i];
			start = i;
		}

		if (price[i] > price[i + 1] || i == n - 1)
		{
			ansE = i;
			cout << "(" << start << " " << ansE << ") ";
			// start = i + 1;
			buy = price[i];
			maxD = INT_MIN;
		}

		if (diff > maxD)
		{
			maxD = diff;
			ansE = i;
		}
	}
	cout << endl;
	return;
}

void stockBuySell_M3(int price[], int n)
{
	int mini= a[0], cost, profit =0;
    
    for(int i=1; i<n; i++){
        cost = a[i] - mini;
        profit = max(profit , cost);
        mini = min(mini, a[i]);
                
    }   
	return;  

}

int main()
{

	int size, i;
	cin >> size;
	int price[size];
	for (i = 0; i < size; i++)
		cin >> price[i];

	stockBuySell_M2(price, size);

	return 0;
}
