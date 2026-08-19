class Solution {
public:
    // Leetcode 169 Majority element
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int res = 0;
        for(int i = 0; i<n; i++){
            mpp[nums[i]] += 1;
        }

        for(auto& it : mpp){
            if(it.second > floor(n/2)){
                res = it.first;
                break;
            }
        }
        return res;
    }
};
