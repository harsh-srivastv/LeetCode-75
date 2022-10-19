// https://leetcode.com/problems/first-bad-version/

#include<bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid;
        
        while(low <= high){
            mid = low + (high-low)/2;
            if(isBadVersion(mid)==false){
                low = mid+1;
            }
            else if(isBadVersion(mid)== true and isBadVersion(mid-1)==false){
                break;
            }
            else{
                high = mid-1;
            }
        }
        return mid;
    }
};