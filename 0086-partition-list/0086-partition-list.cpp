class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(100); // farzi node
        ListNode* hi = new ListNode(100); // farzi node

        ListNode* tlo = lo; // farzi node ka traverser
        ListNode* thi = hi; // same as above
        ListNode* temp = head;
        while (temp != NULL) {
            if (temp->val < x) {
                tlo->next = temp;
                temp = temp->next;
                tlo = tlo->next;
            } else {
                // if(temp->val>=x)
                thi->next = temp;
                temp = temp->next;
                thi = thi->next;
            }
        }
        tlo->next = hi->next;
        thi->next=NULL;
        return lo->next;
    }
};