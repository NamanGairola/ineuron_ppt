//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


vector<vector<int>> Paths(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}



int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        vector<vector<int>> paths = Paths(root);
        for(int i = 0;i<paths.size();i++){
            for(int j = 0;j<paths[i].size();j++){
                cout<<paths[i][j]<<" ";
            }
            cout<<"#";
        } 
        cout<<"\n";
    }
    return 0;
}



// } Driver Code Ends


/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

/* The function should print all the paths from root
 to leaf nodes of the binary tree */
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>>ans;
    queue<vector<Node*>>q;
    q.push({root});
    int i,si;
    vector<int>t;
    while(!q.empty())
    {
        si=q.front().size()-1;
        if(q.front()[si]->left==NULL && q.front()[si]->right==NULL)
        {
            t=vector<int>();
            for(i=0;i<=si;i++)
            {
                t.push_back(q.front()[i]->data);
            }
            ans.push_back(t);
        }
        else
        {
            if(q.front()[si]->left!=NULL)
            {
                q.front().push_back(q.front()[si]->left);
                q.push(q.front());
                q.front().pop_back();
            }
            if(q.front()[si]->right)
            {
                q.front().push_back(q.front()[si]->right);
                q.push(q.front());
            }
        }
        q.pop();
    }
    return ans;
}