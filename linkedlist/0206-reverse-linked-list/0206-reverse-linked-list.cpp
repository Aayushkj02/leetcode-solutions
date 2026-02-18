class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* next = curr -> next;
            curr -> next = prev;
            
            //Updaing values
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};