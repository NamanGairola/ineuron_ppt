bool cmp(pair<string,int>&b,pair<string,int>&a)
{
    if(a.second>b.second)
    {
        return false;
    }
    else if(a.second<b.second)
    {
        return true;
    }
    if(a.first<b.first)
    {
        return false;
    }
    return true;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        unordered_map<string,int>::iterator itr;
        int i,n=words.size();
        for(i=0;i<n;i++)
        {
            m[words[i]]++;
        }
        vector<pair<string,int>>wf;
        n=m.size();
        itr=m.begin();
        for(i=0;i<n;i++,itr++)
        {
            wf.push_back({itr->first,itr->second});
        }
        sort(wf.begin(),wf.end(),cmp);
        vector<string>ans;
        for(i=0;i<k;i++)
        {
            ans.push_back(wf[i].first);
        }
        return ans;
    }
};