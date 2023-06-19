class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int i,n=deck.size();
        vector<int>ans(n);
        queue<int>q;
        for(i=0;i<n;i++)
        {
            q.push(i);
        }
        i=0;
        while(!q.empty())
        {
            ans[q.front()]=deck[i];
            i++;
            q.pop();
            if(!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};