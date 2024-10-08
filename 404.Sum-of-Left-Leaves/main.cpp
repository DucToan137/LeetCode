#include <iostream>
#include <queue>
#include <vector>

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

bool isLeftLeaf(TreeNode *root)
{
    return root->left && !root->left->left && !root->left->right;
}

int sumOfLeftLeaves(TreeNode *root)
{
    if (!root)
        return 0;
    int sum = 0;
    if (isLeftLeaf(root))
    {
        sum += root->left->val;
    }
    else
    {
        sum += sumOfLeftLeaves(root->left);
    }
    sum += sumOfLeftLeaves(root->right);
    return sum;
}

int main()
{

    return 0;
}