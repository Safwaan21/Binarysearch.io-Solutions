/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    if(!l0) return l1;
    if(!l1) return l0;
    int t=0;
    LLNode* start = l0;
    while(l0 && l1){
        LLNode* s = (t) ? l1->next : l0->next;
        if(t) l1->next = l0;
        else l0->next = l1;
        if(t) l1 = s;
        else l0 = s;
        t^=1;
    }
    return start;
}
