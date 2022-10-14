// https://leetcode.com/problems/isomorphic-strings/?envType=study-plan&id=level-1
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()) return false;
            
        int firstmap[256] = {0};
        int secondmap[256] = {0};
        
        for(int i=0; i<s.size(); i++){
            if(!firstmap[s[i]] and !secondmap[t[i]]){
                firstmap[s[i]] = t[i];
                secondmap[t[i]] = s[i];
            }
            else if(firstmap[s[i]] != t[i]) return false;
        }
        return true;
    }
};