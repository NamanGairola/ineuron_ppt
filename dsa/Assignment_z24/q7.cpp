class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>s;
        vector<int>ans;
        int i,n=nums.size(),j=0;
        for(i=0;i<k;i++)
        {
            s.insert(nums[i]);
        }
        ans.push_back(*--s.end());
        for(;i<n;i++)
        {
            s.erase(s.find(nums[j]));
            s.insert(nums[i]);
            ans.push_back(*--s.end());
            j++;
        }
        return ans;
    }
};