class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int i,n=nums.size(),current=0,maxsum=INT_MIN,minsum=INT_MAX,sum=0,cur=0;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            current+=nums[i];
            maxsum=max(maxsum,current);
            if(current<0)
            {
                current=0;
            }
            cur+=nums[i];
            minsum=min(minsum,cur);
            if(cur>0)
            {
                cur=0;
            }
        }
        if(maxsum>0)
        {
            return max(maxsum,sum-minsum);
        }
        return maxsum;
    }
};