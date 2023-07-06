class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        string str;
        map<string,vector<string>>m;
        map<string,vector<string>>::iterator itr;
        int i,n=strs.size();
        for(i=0;i<n;i++)
        {
            str=strs[i];
            sort(str.begin(),str.end());
            m[str].push_back(strs[i]);
        }
        n=m.size();
        itr=m.begin();
        while(n--)
        {
            ans.push_back(itr->second);
            itr++;
        }
        return ans;
    }
};