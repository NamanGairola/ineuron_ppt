class Solution {
public:
    int rec(vector<int>&nums,int n,int m,vector<vector<int>>&dp)
    {
        if(n==-1 || m==-1)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        int t=0,nt=0;
        if(nums[n]>nums[m])
        {
            t=1+rec(nums,m,m,dp);
        }
        nt=rec(nums,n,m-1,dp);
        return dp[n][m]=max(t,nt);
    }
    int lengthOfLIS(vector<int>& nums) {
        nums.push_back(INT_MAX);
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return rec(nums,n-1,n-1,dp);
    }
};