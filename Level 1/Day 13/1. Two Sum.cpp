// https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(target-nums[i]) != map.end()){
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};