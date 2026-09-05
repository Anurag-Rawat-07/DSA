struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;

    while (curr != NULL) {

        if (curr->val == val) {

            // deleting head
            if (prev == NULL) {
                head = curr->next;
                curr = head;
            }
            else {
                prev->next = curr->next;
                curr = curr->next;
            }

        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}