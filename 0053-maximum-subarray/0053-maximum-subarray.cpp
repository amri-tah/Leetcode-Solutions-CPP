class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = 0;
        for (int val:nums){
            if (currSum<0) currSum=0; // Reset to 0 if negative 
            currSum+=val;
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};