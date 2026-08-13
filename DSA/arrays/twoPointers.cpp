class Solution {
public:
    // Leetcode 11
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int max_area = 0;
        while(l<r){
            int h = (height[l]>height[r]) ? height[r]:height[l] ;
            int area = h * (r-l);
            max_area = (area > max_area) ? area : max_area;
            if(height[l]>height[r]) {
                r--;
            } else {
                l++;
            }
        }
        return max_area;
    }
};
