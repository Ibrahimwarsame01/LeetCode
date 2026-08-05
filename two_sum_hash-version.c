#define TABLE_SIZE 10007
typedef struct Entry {
    int key;
    int index;
    struct Entry* next;
} Entry;

unsigned int hash(int key){
    return ((unsigned int)key % TABLE_SIZE);
}

void insert(Entry* table[], int key, int index){
    Entry* newentry = malloc(sizeof(Entry));
    unsigned int h = hash(key);
    newentry->key = key;
    newentry->index = index;
    newentry->next = table[h];
    table[h] = newentry;
}

int lookup(Entry* table[], int key){
    unsigned int h = hash(key);
    Entry* curr = table[h];
    while(curr != NULL){
        if (curr->key == key){
            return curr->index;
        }
        curr = curr->next;
    }
    return -1;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Entry* table[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++){
        table[i] = NULL;
    }

    int* output = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int s = lookup(table, complement);
        if (s != -1) {
            output[0] = s;
            output[1] = i;
            return output;
        }
        insert(table, nums[i], i);
    }

    free(output);
    *returnSize = 0;
    return NULL;
}

    
