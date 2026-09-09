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

public:
    // Leetcode 283
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0;

        for(int i = 0; i<n; i++){
            if(nums[i]!=0){
                swap(nums[l], nums[i]);
                l++;
            }
        }
    }

public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while (l <= r) {
            if (height[l] <= height[r]) {

                if (height[l] >= leftMax) {
                    leftMax = height[l];
                } else {
                    water += leftMax - height[l];
                }

                l++;
            }
            else {

                if (height[r] >= rightMax) {
                    rightMax = height[r];
                } else {
                    water += rightMax - height[r];
                }

                r--;
            }
        }

        return water;
    }
};

