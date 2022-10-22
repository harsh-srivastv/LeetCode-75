// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
    1. find the minimum price of purchase.
    2. then find the max price to sell from the left of the min price.
    */
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for(int i=0; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
        }
        
        return maxProfit;
    }
};