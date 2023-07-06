class Solution {
public:
    int romanToInt(string num) {
        vector<int>arr={1,5,10,50,100,500,1000};
    int i=0,n=num.size(),ans=0,ps=0,dv=0;
    if(num[0]=='I')
    {
        ps=arr[0];
    }
    else if(num[0]=='V')
    {
        ps=arr[1];
    }
    else if(num[0]=='X')
    {
        ps=arr[2];
    }
    else if(num[0]=='L')
    {
        ps=arr[3];
    }
    else if(num[0]=='C')
    {
        ps=arr[4];
    }
    else if(num[0]=='D')
    {
        ps=arr[5];
    }
    else if(num[0]=='M')
    {
        ps=arr[6];
    }
    for(i=1;i<n;i++)
    {
        if(num[i]=='I')
        {
            dv=arr[0];
        }
        else if(num[i]=='V')
        {
            dv=arr[1];
        }
        else if(num[i]=='X')
        {
            dv=arr[2];
        }
        else if(num[i]=='L')
        {
            dv=arr[3];
        }
        else if(num[i]=='C')
        {
            dv=arr[4];
        }
        else if(num[i]=='D')
        {
            dv=arr[5];
        }
        else if(num[i]=='M')
        {
            dv=arr[6];
        }
        if(ps<dv)
        {
            ps=dv-ps;
        }
        else
        {
            ans+=ps;
            ps=dv;
        }
    }
    ans+=ps;
    return ans;
    }
};