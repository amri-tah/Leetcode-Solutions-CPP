#include<set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> dups;
        for (int i=0; i<nums.size(); i+=1){
            if (dups.count(nums[i])!=0) return true;
            dups.insert(nums[i]);
        }
        return false;
    }
};