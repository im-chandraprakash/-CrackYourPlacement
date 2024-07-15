class Solution {
public:

    // Approach - Two Pointer
    int findDuplicate(vector<int>& nums) {
        
        int start = 0;
        
        while(nums[start] != -1){

            int val = nums[start];
            nums[start] = -1;
            start = val;
        }

        return start;
    }
};