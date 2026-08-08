
bool isValid(char* s) {
int len = strlen(s);
char * stack = malloc(len * sizeof(char));
int top = -1;
    for(int i = 0; i < len ; i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stack[top] = s[i];
        }else {
            if (top == -1){
                return false;
            }
        bool matches = (stack[top] == '(' && s[i] == ')') || (stack[top] == '{' && s[i] == '}') || (stack[top] == '[' && s[i] == ']');
        if(matches){
            top--;
        }else{
            return false;
        }
    }
}

free(stack);
stack = NULL;
return (top == -1);
}
