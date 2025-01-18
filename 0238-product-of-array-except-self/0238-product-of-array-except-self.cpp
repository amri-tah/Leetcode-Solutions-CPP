class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());
        answer[0] = 1;
        for (int i=1; i<nums.size(); i++){
            answer[i] = nums[i-1]*answer[i-1];
        }
        int post = 1;
        for (int i=answer.size()-1; i>=0; i--){
            answer[i]*=post;
            post*=nums[i];
        }
        return answer;
    }
};