class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int temp = 0, left = 0, minLen = INT_MAX;
        for (int right = 0; right < nums.size(); right++) {
            temp += nums[right];

            while (temp >= target) {
                minLen = min(minLen, right - left + 1);
                temp -= nums[left];
                left++;
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }

};