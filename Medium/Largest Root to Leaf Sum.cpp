/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    return (root) ? root->val + max(solve(root->left),solve(root->right)) : 0;
}
