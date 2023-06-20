class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int i,j,n=nums.size(),se=INT_MIN,th=INT_MIN;
        stack<int>st;
        if(n<3)
        {
            return false;
        }
        for(i=n-1;i>=0;i--)
        {
            if(nums[i]<th)
            {
                return true;
            }
            while(!st.empty() && st.top()<nums[i])
            {
                th=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};