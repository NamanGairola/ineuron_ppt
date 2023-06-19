class Solution {
public:
    int findTheWinner(int n, int k) {
        int i;
        queue<int>q;
        for(i=1;i<=n;i++)
        {
            q.push(i);
        }
        i=1;
        while(q.size()>1)
        {
            if(i==k)
            {
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
            i++;
            if(i>k)
            {
                i=1;
            }
        }
        return q.front();
    }
};