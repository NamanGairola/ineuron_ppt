class Solution {
public:
    void mergesort(vector<pair<int,int>>&nnum,vector<int>&arr,int l,int r,vector<int>&ans)
{
    int m;
    if(l<r)
    {
        // cout<<l<<" "<<r<<'\n';   
        m=(l+r)/2;
        mergesort(nnum,arr,l,m,ans);
         // cout<<m+1<<" "<<r<<'\n';
        mergesort(nnum,arr,m+1,r,ans);
        // cout<<m<<" "<<m+1<<'\n';
        merge(nnum,arr,l,r,m,ans);
    }
}
void merge(vector<pair<int,int>>&nnum,vector<int>&arr,int l,int r,int m,vector<int>&ans)
{
    // cout<<r<<" ";
    int c1=m-l+1,c2=r-m,i=0,j=0,k=l,len=0;
    int al[c1],ar[c2];
    vector<int>alinc(ans.size());
    for(i=0;i<c1;i++)
    {
        al[i]=nnum[k].first;
        k++;
    }
    for(j=0;j<c2;j++)
    {
        ar[j]=nnum[k].first;
        k++;
    }
    i=0;
    j=0;
    k=l;
    // if(m==2)
    // {
    //     cout<<k<<" "<<c1;
    // }
    while(i<c1 && j<c2)
    {
        len++;
        if(al[i]<=ar[j])
        {
            nnum[k]=al[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=ar[j];
            j++;
            k++;
            alinc[nums[]]+=1;
        }

    }
    while(i<c1)
    {
        len++;
        arr[k]=al[i];
        i++;
        k++;
    }
    while(j<c2)
    {
        arr[k]=ar[j];
        j++;
        k++;
    }
    k=l;
    ans[k]+=alinc[0];
    k++;
    for(i=1;i<c1;i++,k++)
    {
        alinc[i]+=alinc[i-1];
        ans[k]+=alinc[i];
    }

}
    vector<int> countSmaller(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int>ans(r+1);
        int i;
        vector<pair<int,int>>nnum;
        for(i=0;i<n;i++)
        {
            nnum.push_back({nums[i],i});
        }
        mergesort(nnum,nums,l,r,ans);
        // for(auto i:nums)
        // {
        //     cout<<i<<" ";
        // }
        
        return ans;
    }
};
        