class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       
        ListNode* a = new ListNode();
        ListNode* b = a;
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                b->next = l1;
                l1 = l1->next;
            }
            else
            {
                b->next = l2;
                l2 = l2->next;
            }
            b = b->next;
        }
        
        if(!l1)
        {
            b->next = l2;
        }
        else if(!l2)
        {
            b->next = l1;
        }
        return a->next;
    }
};
