class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,r=nums.size()-1;
        for(;m<=r;m++)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
            }
            if(nums[m]==2)
            {
                swap(nums[m],nums[r]);
                r--;
                m--;
            }
        }
    }
};