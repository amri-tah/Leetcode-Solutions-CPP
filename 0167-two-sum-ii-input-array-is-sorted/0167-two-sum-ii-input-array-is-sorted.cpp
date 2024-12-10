class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;
        while (start<end){
            int val = numbers[start]+numbers[end];
            if (val==target) return {start+1, end+1};
            else if (val>target) end--;
            else if (val<target) start++;
        }
        return {};
    }
};