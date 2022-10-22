// https://leetcode.com/problems/fibonacci-number/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        vector<int> v;
        int sum = 0;
        v.push_back(0);
        v.push_back(1);
         for (int i = 2; i <= n ; i++){
              v.push_back(v[i - 2] + v[i -1]);
         }
        return v[n];
    }
};