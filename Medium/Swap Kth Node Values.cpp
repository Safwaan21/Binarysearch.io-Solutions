/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int k) {
    int n=0;
    LLNode* s = node;
    LLNode* first;
    while(s){
        if(n==k) first = s;
        n++;
        s=s->next;
    }
    s = node;
    n-=k+1;
    while(n--) s=s->next;
    
    swap(first->val,s->val);
    return node;
}
