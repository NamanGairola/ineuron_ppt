class Solution {
public:
     int lengthOfLongestSubstring(string s) {
     int i,ans=0,c=0,j,k;
        int arr[200][2]={0};
        for(i=0;i<s.length();i++)
        {
            if(arr[(int)s[i]][0]!=0)
            {
                if(c>ans)
                {
                    ans=c;
                }
                c=0;
                i=arr[(int)s[i]][1];
                for(j=0;j<200;j++)
                {
                    arr[j][0]=0;
                    arr[j][1]=0;
                }
            }
            else
            {
                arr[(int)s[i]][0]=1;
                arr[(int)s[i]][1]=i;
                c++;
            }
        }
        if(c>ans)
        {
            ans=c;
        }
        return ans;
    }
//wow ab dekha pahilae sae solve kar rakha tha or is bar wrong answer aaya waah
};