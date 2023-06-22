class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i,n=nums1.size(),m=nums2.size(),times;
        int arr[1001]={0},arr2[1001]={0};
        for(i=0;i<n;i++)
        {
            arr[nums1[i]]++;
        }
        for(i=0;i<m;i++)
        {
            arr2[nums2[i]]++;
        }
        for(i=0;i<=1000;i++)
        {
            times=min(arr[i],arr2[i]);
            while(times--)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};