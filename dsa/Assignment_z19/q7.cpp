class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m; 
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                return true;
            }
            else if(nums[m]>target)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        int i,n=nums1.size();
        set<int>s;
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            if(search(nums2,nums1[i]) && s.find(nums1[i])==s.end())
            {
                ans.push_back(nums1[i]);
                s.insert(nums1[i]);
            }
        }
        return ans;
    }
};