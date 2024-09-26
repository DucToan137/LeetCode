#include <iostream>
#include <queue>

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

int maxDepth(TreeNode *root)
{
    if (!root)
    {
        return 0;
    }

    int lDepth = maxDepth(root->left);
    int rDepth = maxDepth(root->right);

    return max(lDepth, rDepth) + 1;
}

int main()
{

    return 0;
}