class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,ans=nums[i],count=1,n=nums.size();
        for(i=1;i<n;i++)
        {
            if(ans==nums[i])
            {
                count++;
            }
            else
            {
                count--;
                if(count==0)
                {
                    count=1;
                    ans=nums[i+1];
                    i++;
                }
            }
        }
        return ans;
    }
};