// 1. brute ? O(N) * O(N) -> O(N) : O(1)
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void printVec(vector<int> nums){

	for(auto i: nums) cout<<i<<" ";
	cout<<endl;
}

int buyNsellStocks(vector<int>& prices){

	int n = prices.size();

	int profit = 0;
	for(int i=0; i<n; i++){

		for(int j=i+1; j<n; j++){

			if(prices[j] > prices[i]){

				profit = max(profit, prices[j] - prices[i]);
			}
		}
	}

	return profit;
}

int main(){

	vector<int> prices = {7,1,5,3,6,4};

	printVec(prices);

	int maxProfit = buyNsellStocks(prices);
	cout<<maxProfit;

	return 0;
}