// https://leetcode.com/problems/longest-palindrome/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        
        for(char x:s){
            freq[x]++;
        }
        int res = 0;
        bool odd_found = false;
        for(auto& x: freq){
            if(x.second%2==0){
                res += x.second;
            }
            else{
                odd_found = true;
                res += x.second-1;
            }
        }
        if(odd_found){
            res += 1;
        }
        
        return res;
    }
};