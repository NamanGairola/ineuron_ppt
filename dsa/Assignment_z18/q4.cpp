class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int i,n=nums.size(),ans=0;
        if(n<=1)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(i=1;i<n;i++)
        {
            ans=max(ans,nums[i]-nums[i-1]);
        }
        return ans;
    }
};