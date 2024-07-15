class Solution {
public:

    // Approach - Just placing at the Right position 
    
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int count = 0;
        if(n == 0) return count;
        count++;

        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i -1]){
                nums[count] = nums[i];
                count++;
            }
        }   

        return count;
    }
};