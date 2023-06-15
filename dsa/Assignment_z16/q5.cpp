// CPP program to reverse the number
// using a stack

#include <bits/stdc++.h>
using namespace std;

// Stack to maintain order of digits
stack <int> st;

// Function to push digits into stack
void push_digits(int number)
{
	while (number != 0)
	{
		st.push(number % 10);
		number = number / 10;
	}
}

// Function to reverse the number
int reverse_number(int number)
{
	stack<int>st;
  	int ans=0,mul=1;
  	while(number)
    {
      st.push(number%10);
      number/=10;
    }
  	while(!st.empty())
    {
      ans=mul*st.top()+ans;
      st.pop();
      mul*=10;
    }
  	return ans;
}

// Driver program to test above function
int main()
{
	int number = 39997;
	
	// Function call to reverse number
	cout << reverse_number(number);
	
	return 0;
}
