/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

priority_queue<int> pq;

void dfs(Tree* node, int k){
    pq.push(node->val);
    if(pq.size() > k+1) pq.pop();
    if(node->left) dfs(node->left,k);
    if(node->right) dfs(node->right,k);
}

int solve(Tree* root, int k) {
    while(pq.size()) pq.pop();
    dfs(root,k);
    return pq.top();
}
