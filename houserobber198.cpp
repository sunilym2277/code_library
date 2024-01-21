/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
  */
class Solution {
public:
    int rob(vector<int>& nums) {
        int s1=0,s2=0;
        for(int i=0;i<nums.size();i++)
        {
            int t=s1;
            s1=max(s2+nums[i],s1);
            s2=t;
        }
        return s1;
        
    }
};
