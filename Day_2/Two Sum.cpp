#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int> mp;
        int n = nums.size();

        for(int i = 0; i < n; i++){

            int val1 = target - nums[i];

            if(mp.find(val1) != mp.end()){
                int start = mp[val1];
                return {start , i};
            }

            mp[nums[i]] = i;
        }

        return {-1 , -1};
    }
};