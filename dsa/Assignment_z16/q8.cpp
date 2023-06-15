//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
        vector<int>left(n),right(n);
        stack<int>st;
        int i;
        for(i=n-1;i>=0;i--)
        {
            while(!st.empty() && A[i]<A[st.top()])
            {
                left[st.top()]=A[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(i=0;i<n;i++)
        {
            while(!st.empty() && A[i]<A[st.top()])
            {
                right[st.top()]=A[i];
                st.pop();
            }
            st.push(i);
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            ans=max(ans,abs(left[i]-right[i]));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends