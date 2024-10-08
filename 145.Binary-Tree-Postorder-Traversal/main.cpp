#include <iostream>
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

void postorderTraversal(TreeNode *root, vector<int> &res)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left, res);
    postorderTraversal(root->right, res);
    res.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> res;
    postorderTraversal(root, res);
    return res;
}

int main()
{

    return 0;
}