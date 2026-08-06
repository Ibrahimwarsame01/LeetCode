/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#define TABLE_SIZE 100003
typedef struct Entry{
    struct ListNode* key;  
    struct Entry* next;
}Entry;

unsigned int hash(struct ListNode* key){
    return (unsigned int)key % TABLE_SIZE;
}

void insert(Entry* table[], struct ListNode* key){
    Entry* newentry = malloc(sizeof(Entry));
    unsigned int h = hash(key);
    newentry->key = key;
    newentry->next = table[h];
    table[h] = newentry;
}

bool contains(Entry* table[], struct ListNode* key){
    unsigned int h = hash(key);
    Entry* curr = table[h];
    while(curr != NULL){
        if ( curr->key == key){
            return true;
        }
        curr = curr->next;
    }
    return false;
}

bool hasCycle(struct ListNode *head) {
    Entry* table[TABLE_SIZE];
    for(int i = 0; i < TABLE_SIZE; i++){
        table[i] = NULL;
    }
    while (head != NULL){
        if (contains(table , head)){
            return true;
        }else{
            insert(table,head);
        }
        head = head ->next;
    }
    return false;
}
