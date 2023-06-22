class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j,n=nums.size();
        for(i=0,j=0;i<n && j<n;)
        {
            if(nums[i]==0 && nums[j]==0)
            {
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0)
            {
                nums[i]=nums[j];
                nums[j]=0;
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
};