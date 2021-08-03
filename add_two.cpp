class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* a = new ListNode();
        ListNode* b = a;
        
        auto i = 0;
        while(l1 || l2 || i)
        {
            auto x = l1 ? l1->val:0;
            auto y = l2? l2->val:0;
            auto val = x+y+i;
            b->next = new ListNode(val%10);
            i = val/10;
            l1 = l1? l1->next : nullptr;
            l2 = l2? l2->next : nullptr;
            b = b->next;
        }
        
        return a->next;
    }
};
