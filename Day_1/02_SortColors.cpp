class Solution {
public:

    // Approach - In place zero and Two 
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int zeroInd = 0;
        int twoInd = n-1;

        for(int i = 0; i<= twoInd; i++){

            if(nums[i] == 0){
                swap(nums[i] , nums[zeroInd]);
                zeroInd++;
            }
            else if(nums[i] == 2){
                swap(nums[i] , nums[twoInd]);
                twoInd--;
                i--;
            }
        }
    }
};