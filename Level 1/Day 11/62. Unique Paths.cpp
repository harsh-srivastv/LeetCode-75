// https://leetcode.com/problems/unique-paths/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//     Brute force approach:
//     Time: exponential and Space: exponential
//     int uniquePaths(int i, int j, int m, int n){
//         if(i==m-1 and j==n-1) return 1;
//         if(i>=n or j>=n) return 0;
//         return uniquePaths(i+1,j) + uniquePaths(i, j+1);
//     }

//     Better approach:
//     Time: mxn and Space: mxn
//     int uniquePaths(int i, int j, int m, int n, vector<vector<int>>dp){
//         if(i==m-1 and j==n-1) return 1;
//         if(i>=n or j>=n) return 0;
//         if(dp[i][j]!=-1){
//              return dp[i][j];
//         }
//         else return dp[i][j] = uniquePaths(i+1,j) + uniquePaths(i, j+1);
//     }
    
//  Best approach:
//  Time: O(r) 
    int uniquePaths(int m, int n) {
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;
        for(int i=1; i<=r; i++){
            res = res * (N-r+i)/i;
        }
        
        return (int)res;
    }
};