class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0, n = nums.size();
        while (i<n && j<n){
            if (nums[j]!=val){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};