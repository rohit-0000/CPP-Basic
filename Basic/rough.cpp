#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class NodeValue
{
public:
    int mini; // right minimum should be greator than root
    int maxi; // left maximum should be less than root
    int sz;
    NodeValue(int mini, int maxi, int sz)
    {
        this->mini = mini;
        this->maxi = maxi;
        this->sz = sz;
    }
};

class Solution
{
public:
    NodeValue preorder(TreeNode *root)
    {
        if (root == NULL)
            return NodeValue(INT_MAX, INT_MIN, 0);
        NodeValue lft = preorder(root->left);
        NodeValue rgt = preorder(root->right);
        if (lft.maxi < root->val && rgt.mini > root->val)
        {
            return NodeValue(min(lft.mini, root->val), max(rgt.maxi, root->val), 1 + lft.sz + rgt.sz);
        }
        else
        {
            return NodeValue(INT_MIN, INT_MAX, max(lft.sz, rgt.sz));
        }
    }
    int largestBst(TreeNode *root)
    {
        // Your code here
        return preorder(root).sz;
    }
};
int main()
{

    return 0;
}