/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int ans=0;
    while(node){
        ans = ans*2 + node->val;
        node = node->next;
    }
    return ans;
}
