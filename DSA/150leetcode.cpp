#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int k = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[k++] = nums[i];
        }
    }
    return k;
    }

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int p = 1;
        while(p<n){
            while(p<n && nums[p]==nums[p-1]){
                p++;
            }
            if(p==n) break;
            nums[k++]=nums[p];
            p++;
        }
        return k;
    }

int removeDuplicates2(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n==1|| n==2) return n;
        map<int,int> hash;
        int p = 0;
        int k = 2;
        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }
    }

int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                int profit = price - minPrice;
                maxProfit = max(maxProfit, profit);
            }
        }

        return maxProfit;
    }

int maxProfit2(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;

        for(int i = 0; i<n-1;i++){
            if (prices[i]<prices[i+1]){
                int profit = prices[i+1]-prices[i];
                maxProfit += profit;
            } 
        }
        return maxProfit;
    }

bool canJump(vector<int>& nums) {
        int maxReach = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
        }

        return true;
    }


    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char c : s1)
            freq1[c - 'a']++;

        int n = s1.size();

        for (int i = 0; i < n; i++)
            freq2[s2[i] - 'a']++;

        if (freq1 == freq2)
            return true;

        for (int i = n; i < s2.size(); i++) {

            freq2[s2[i] - 'a']++;       
            freq2[s2[i - n] - 'a']--;  
            if (freq1 == freq2)
                return true;
        }

        return false;
    }
};
