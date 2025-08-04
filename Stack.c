void push(int data);
int pop();
int top();
int isStackEmpty();

struct stackStructTag {
    // replace with linked list
    //int* data;
    int size;
    int cur;

    int (*isEmpty)(struct stackStructTag);
};
typedef struct stackStructTag Stack;

Stack* newStack(int size) {
    Stack* temp = malloc(sizeof(Stack));

    if (temp == NULL) {
        printf("ERROR: NullPointerException\n");
        exit(1);
    }

    // replace with new list
    //new -> data = (int*)malloc(size * sizeof(int));
    temp -> size = size;
    temp -> cur = 0;
    temp -> isEmpty = isStackEmpty;

    return temp;
}

int isStackEmpty(Stack s) {
    return s.cur == 0;
}