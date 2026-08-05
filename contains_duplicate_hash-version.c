#define TABLE_SIZE 100003
#include <stdbool.h>
#include <stdlib.h>

typedef struct Entry {
    int key;
    struct Entry* next;
} Entry;

unsigned int hash(int key){
    return ((unsigned int)key % TABLE_SIZE);
}

void insert(Entry* table[], int key){
    Entry* newentry = malloc(sizeof(Entry));
    unsigned int h = hash(key);
    newentry->key = key;
    newentry->next = table[h];
    table[h] = newentry;
}

bool contains(Entry* table[], int key){
    unsigned int h = hash(key);
    Entry* curr = table[h];
    while(curr != NULL){
        if (curr->key == key){
            return true;
        }
        curr = curr->next;
    }
    return false;
}

bool containsDuplicate(int* nums, int numsSize) {
    Entry* table[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++){
        table[i] = NULL;
    }

    for(int i = 0; i < numsSize; i++){
        if(contains(table, nums[i])){
            return true;
        }
        insert(table, nums[i]);
    }
    return false;
}
