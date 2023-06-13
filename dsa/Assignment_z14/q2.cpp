//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i,n=num1.size(),m=num2.size(),carry=0,val;
        string ans="";
        for(i=0;i<n && i<m;i++)
        {
            val=(num1[i]-48)+(num2[i]-48)+carry;
            if(val>=10)
            {
                carry=1;
                val=val%10;
            }
            else
            {
                carry=0;
            }
            ans.push_back((char)(val+48));
        }
        for(;i<n;i++)
        {
            val=(num1[i]-48)+carry;
            if(val>=10)
            {
                carry=1;
                val=val%10;
            }
            else
            {
                carry=0;
            }
            ans.push_back((char)(val+48));
        }
        for(;i<m;i++)
        {
            val=(num2[i]-48)+carry;
            if(val>=10)
            {
                carry=1;
                val=val%10;
            }
            else
            {
                carry=0;
            }
            ans.push_back((char)(val+48));
        }
        if(carry==1)
        {
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *t=head;
        int i,n;
        string snum="";
        while(t!=NULL)
        {
            snum.push_back((char)(t->data+48));
            t=t->next;
        }
        snum=addStrings(snum,"1");
        Node *ans=new Node(snum[0]-48);
        n=snum.size();
        t=ans;
        for(i=1;i<n;i++)
        {
            t->next=new Node(snum[i]-48);
            t=t->next;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends