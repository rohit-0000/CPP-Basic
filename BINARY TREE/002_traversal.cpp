#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
void pre(TreeNode *root, vector<int> &v1)
{
    if (root == NULL)
        return;
    v1.push_back(root->data);
    pre(root->left, v1);
    pre(root->right, v1);
}
void post(TreeNode *root, vector<int> &v1)
{
    if (root == NULL)
        return;
    post(root->left, v1);
    post(root->right, v1);
    v1.push_back(root->data);
}
void in1(TreeNode *root, vector<int> &v1)
{
    if (root == NULL)
        return;
    in1(root->left, v1);
    v1.push_back(root->data);
    in1(root->right, v1);
}
vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    vector<vector<int>> ans(3);
    if (root == NULL)
        return ans;
    in1(root, ans[0]);
    pre(root, ans[1]);
    post(root, ans[2]);
    return ans;
}
int main()
{
    
    return 0;
}