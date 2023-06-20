// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,r=n;
        while(l<r)
        {
            if(isBadVersion(l+(r-l)/2))
           {
               r=(l+(r-l)/2);
           }
            else
           {
               l=(l+(r-l)/2)+1;
           }
        }
        return l;
    }
};