/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int t) {
    return (root) ? (root->val <= t) ? solve(root->right,t) : min(solve(root->left,t),root->val) : 1e9;
}
