class Solution {

public:

   void deleteNode(ListNode* node) {

       ListNode* next_node = node->next;

       node->val = next_node->val;

       node->next = next_node->next;

       delete next_node;

   }

};
