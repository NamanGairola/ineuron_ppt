class Solution {
public:
    int firstUniqChar(string s) {
        int i,n=s.size();
        map<int,int>m;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            m[s[i]]++;
            mp[s[i]]=i;
        }
        for(i=0;i<n;i++)
        {
            if(m[s[i]]==1)
            {
                return mp[s[i]];
            }
        }
        return -1;
    }
};