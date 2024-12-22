#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
    TreeNode() {}
};


// Inorder tree traversal (Left - Root - Right)
void inorderTraversal(TreeNode *root)
{
    if (!root)
        return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

// Preorder tree traversal (Root - Left - Right)
void preorderTraversal(TreeNode *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Postorder tree traversal (Left - Right - Root)
void postorderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}

// Function for Level order tree traversal
void levelorderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;

    // Queue for level order traversal
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        // Push left child in the queue
        if (temp->left)
            q.push(temp->left);
        // Push right child in the queue
        if (temp->right)
            q.push(temp->right);
    }
}
int main()
{
    string tree;
    getline(cin,tree);

    stringstream s(tree);
    string str;
    getline(s,str,',');
    TreeNode *root = new TreeNode(stoi(str));
    queue<TreeNode *> q1;
    q1.push(root);
    while(!q1.empty())
    {
        TreeNode *temp = q1.front();
        q1.pop();
        if (!getline(s, str, ',')) break;  // Check if there's a value to read
        if (str != "null")
        {
            temp->left = new TreeNode(stoi(str));
            q1.push(temp->left);
        }
        if (!getline(s, str, ',')) break;  // Check if there's a value to read
        if (str != "null")
        {
            temp->right = new TreeNode(stoi(str));
            q1.push(temp->right);
        }
    }
    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    levelorderTraversal(root);
    return 0;
}