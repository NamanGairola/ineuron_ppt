// CPP Program to check if a queue of first
// n natural number can be sorted using a stack
#include <bits/stdc++.h>
using namespace std;

// Function to check if given queue element
// can be sorted into another queue using a
// stack.
bool checkSorted(int n, queue<int>& q)
{
  stack<int>st;
  int current=1;
  while(!q.empty())
  {
    if(q.front()==current)
    {
      current++;
      q.pop();
    }
    else
    {
      st.push(q.front());
      q.pop();
    }
    while(!st.empty() && st.top()==current)
    {
      current++;
      st.pop();
    }
  }
  while(!st.empty() && st.top()==current)
  {
    current++;
    st.pop();
  }
  if(current==n+1)
  {
    return true;
  }
  return false;
}

// Driven Program
int main()
{
	queue<int> q;
	q.push(5);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	int n = q.size();

	(checkSorted(n, q) ? (cout << "Yes") :
						(cout << "No"));

	return 0;
}
