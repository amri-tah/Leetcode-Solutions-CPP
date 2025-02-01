class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0, left_sum = 0,
            right_sum = right_sum = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size() - 1; i++) {
            left_sum += nums[i];
            right_sum -= nums[i];
            if ((left_sum - right_sum) % 2 == 0)
                count++;
        }
        return count;
    }
};