class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zero=0,one=0;
        int i,n=students.size();
        for(i=0;i<n;i++)
        {
            if(students[i]==0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(sandwiches[i]==0)
            {
                zero--;
                if(zero<0)
                {
                    break;
                }
            }
            else
            {
                one--;
                if(one<0)
                {
                    break;
                }
            }
        }
        return n-i;
    }
};