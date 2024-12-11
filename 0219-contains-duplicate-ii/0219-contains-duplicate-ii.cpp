class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hmap; // value, index
        for (int i=0; i<nums.size(); i++){
            if (hmap.count(nums[i])!=0 && i-hmap[nums[i]]<=k) return true;
            hmap[nums[i]]=i;
        }
        return false;
    }
};