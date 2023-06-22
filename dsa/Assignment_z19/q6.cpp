class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,k=0;
        vector<int>temp=nums1;
        for(i=0,j=0;i<m && j<n;k++)
        {
            if(temp[i]<=nums2[j])
            {
                nums1[k]=temp[i];
                i++;
            }
            else
            {
                nums1[k]=nums2[j];
                j++;
            }
        }
        while(i<m)
        {
            nums1[k]=temp[i];
            i++;
            k++;
        }
        while(j<n)
        {
            nums1[k]=nums2[j];
            j++;
            k++;
        }
    }
};