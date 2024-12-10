class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0; 
        int maxarea = 0;
        int end = height.size()-1;
        while (start<end){
            int area = (end-start)*min(height[start], height[end]);
            maxarea = max(maxarea, area);
            if (height[start]>=height[end]) end--;
            else start++;
        }
        return maxarea;
    }
};