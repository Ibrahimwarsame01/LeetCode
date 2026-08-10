
typedef struct MinstackNode{
    int value;
    int min;
    struct MinstackNode* next;
} MinStackNode;

typedef struct {
    MinStackNode* top;
} MinStack;

MinStack* minStackCreate() {
   MinStack* obj = malloc(sizeof(MinStack));
    obj->top = NULL;
    return obj;
}

void minStackPush(MinStack* obj, int value) {
    MinStackNode * s = malloc(sizeof(MinStackNode));
    s->value = value;
     if (obj->top == NULL) {
        s->min = value;
    } else {
        if (obj->top->min < value) {
            s->min = obj->top->min;
        } else {
            s->min = value;
        }
    }
    
    s->next = obj->top;
    obj->top = s;

}

void minStackPop(MinStack* obj) {
    MinStackNode* temp = obj->top->next;
    free(obj->top);
    obj->top = temp;
}

int minStackTop(MinStack* obj) {
    return obj->top->value;
}

int minStackGetMin(MinStack* obj) {
    return obj->top->min;
}

void minStackFree(MinStack* obj) {
    MinStackNode* curr = obj->top;
    while(curr != NULL){
        MinStackNode* temp = curr->next;
        free(curr);
        curr = temp;
    }
    free(obj);
    
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
