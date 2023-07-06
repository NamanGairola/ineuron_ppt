class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>::iterator itr;
        itr=lower_bound(arr.begin(),arr.end(),x);
        int i,j=itr-arr.begin(),n=arr.size();
        i=j-1;
        vector<int>ans1,ans2;
        while(k--)
        {
            if(i==-1)
            {
                ans2.push_back(arr[j]);
                j++;
            }
            else if(j==n)
            {
                ans1.push_back(arr[i]);
                i--;
            }
            else
            {
                if(abs(x-arr[i])<=abs(x-arr[j]))
                {
                    ans1.push_back(arr[i]);
                    i--;
                }
                else
                {
                    ans2.push_back(arr[j]);
                    j++;
                }
            }
        }
        if(ans1.size()!=0)
        {
            reverse(ans1.begin(),ans1.end());
        }
        ans1.insert(ans1.end(),ans2.begin(),ans2.end());
        return ans1;
    }
};