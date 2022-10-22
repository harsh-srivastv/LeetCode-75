// https://leetcode.com/problems/find-pivot-index/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
//      First find the prefix sum of the whole array and assign it to right sum
//      Then traverse array 
//      add each element to left sum, check if it is equal to right sum 
//      then return index 
//      else subtract that ele from right sum and continue the process
        int total_sum = 0;
        for(int i=0;i<nums.size();i++){
            total_sum += nums[i];
        }
        
        int left_sum = 0;
        int right_sum = total_sum;
        
        for(int i=0;i<nums.size();i++){
            left_sum += nums[i];
            
            if(left_sum == right_sum) return i;
            
            right_sum -= nums[i];
        }
        return -1;
    }
};