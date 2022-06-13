#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minPrice=INT_MAX, profit=0,curProfit=0;
    
    for(int i=0; i<prices.size() ;i++)
    {
        if(prices[i]<minPrice) minPrice = prices[i];
        curProfit= prices[i]-minPrice;
        profit= max(profit, curProfit);
    }
    return profit;
}