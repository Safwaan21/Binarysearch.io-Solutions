/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    vector<int> ans;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()){
        auto u = q.front();q.pop();
        if(!u)continue;
        ans.push_back(u->val);
        q.push(u->left);
        q.push(u->right);
    }
    return ans;
}
