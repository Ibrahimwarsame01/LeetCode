/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int count = 0;
    struct ListNode* s = head;
    while (s!= NULL){
        count++;
        s = s->next;
    }
    for(int i = 0; i < count / 2; i++){
        head = head->next;
    }
    return head;
}
