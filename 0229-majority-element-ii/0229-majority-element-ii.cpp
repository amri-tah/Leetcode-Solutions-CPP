#include <unordered_map>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hashmap;
        for (int i=0; i<n; i+=1){
            hashmap[nums[i]]++;
        }

        vector<int> output;
        for (auto i:hashmap){
            if (i.second>(n/3)) output.push_back(i.first);
        }
        return output;
    }
};