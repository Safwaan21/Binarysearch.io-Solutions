/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int ans;
void dfs(Tree* node,int sum){
    sum+=node->val;
    if(!node->left && !node->right) ans+=sum;
    if(node->left) dfs(node->left,sum*10);
    if(node->right) dfs(node->right,sum*10);
}

int solve(Tree* root) {
    ans=0;
    dfs(root,0);
    return ans;
}
