/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int ans;

int dfs(Tree* node){
    if(!node) return 0;
    int k = dfs(node->left);
    int l = dfs(node->right);
    ans = max({k+l+node->val,k+node->val,l+node->val,ans});
    return max({0,k+node->val,l+node->val});
}

int solve(Tree* root) {
    ans=0;
    dfs(root);
    return ans;
}
