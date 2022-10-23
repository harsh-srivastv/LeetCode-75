// https://leetcode.com/problems/min-cost-climbing-stairs/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[10001];
        dp[0] = cost[0];
        dp[1] = cost[1];
        int n = cost.size();
        for(int i=2; i<n; i++)
        {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
};