class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k==0||head==NULL) return head;
        int len = 0;
        ListNode* cur = head;
        while(cur)
        {
            len++;
            cur = cur->next;
        }
        ListNode *left = head, *right = head;
        k%=len;
        while(k--)
        {
            right=right->next;
        }
        
        while(right->next != NULL)
        {
            right = right->next;
            left = left->next;
        }
        right->next = head;
        ListNode *ans = left->next;
        left->next = NULL;
        
        return ans;
    }
};
