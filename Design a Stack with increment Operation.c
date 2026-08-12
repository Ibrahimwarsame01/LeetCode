
typedef struct {
    int *data;
    int top;
    int capacity;
} CustomStack;


CustomStack* customStackCreate(int maxSize) {
    CustomStack * obj = malloc(sizeof(CustomStack));
    obj->capacity = maxSize;
    obj->top = -1; 
    obj->data = malloc(maxSize * sizeof(int));
    return obj;  
}

void customStackPush(CustomStack* obj, int x) {
    if(obj->top < (obj->capacity - 1)){
         obj->data[++(obj->top)] = x;
    }
    
}

int customStackPop(CustomStack* obj) {
    if(obj->top == -1){
        return -1;
    }else{
        return obj->data[(obj->top)--];
    }
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    for (int i = 0; i < k && i <= obj->top; i++) {
        obj->data[i] = obj->data[i] + val;
    }
}

void customStackFree(CustomStack* obj) {
    free(obj);
}

/**
 * Your CustomStack struct will be instantiated and called as such:
 * CustomStack* obj = customStackCreate(maxSize);
 * customStackPush(obj, x);
 
 * int param_2 = customStackPop(obj);
 
 * customStackIncrement(obj, k, val);
 
 * customStackFree(obj);
*/
