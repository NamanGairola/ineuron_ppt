class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i,j=0,k=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                ans[k]=nums[i];
                k=k+2;
            }
            else
            {
                ans[j]=nums[i];
                j=j+2;
            }
        }
        return ans;
    }
};