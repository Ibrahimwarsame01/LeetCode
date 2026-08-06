/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode d;
    d.next = NULL;
    struct ListNode* tail = &d;

    while(list1 != NULL && list2 != NULL){
      if( list1->val > list2->val || list1->val == list2->val ){
        tail->next = list2;
        list2 = list2->next;
      }else{
        tail->next = list1;
        list1 = list1->next;
      }
    tail = tail->next; 

    }
    if (list1 == NULL){
        tail->next= list2;
    }else{
        tail->next= list1;
    }
    return d.next;
    
}
