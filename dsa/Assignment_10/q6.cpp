// 💡 **Question 6**

// **Example 1:**

// ```
// Input:
// N = 2
// Output:
// move disk 1 from rod 1 to rod 2
// move disk 2 from rod 1 to rod 3
// move disk 1 from rod 2 to rod 3
// 3
// Explanation:For N=2 , steps will be
// as follows in the example and total
// 3 steps will be taken.
// ```

// **Example 2:**

// ```
// Input:
// N = 3
// Output:
// move disk 1 from rod 1 to rod 3
// move disk 2 from rod 1 to rod 2
// move disk 1 from rod 3 to rod 2
// move disk 3 from rod 1 to rod 3
// move disk 1 from rod 2 to rod 1
// move disk 2 from rod 2 to rod 3
// move disk 1 from rod 1 to rod 3
// 7
// Explanation:For N=3 , steps will be
// as follows in the example and total
// 7 steps will be taken.
// ```

#include<bits/stdc++.h>
using namespace std;
void  towerofhanoi(int n, int from_rod, int to_rod,int mid_rod,int &ans)
{
    if (n == 0) {
        return ;
    }
    towerofhanoi(n - 1, from_rod, mid_rod, to_rod,ans);
    ans++;
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerofhanoi(n - 1, mid_rod, to_rod, from_rod,ans);
}
int main()
{
    int n = 3,ans=0;
    towerofhanoi(n, 1, 3, 2,ans);
    cout<<ans;
    return 0;
}