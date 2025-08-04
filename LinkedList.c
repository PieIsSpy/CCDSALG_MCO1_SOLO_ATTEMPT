struct nodeStructTag {
    Data data;
    struct nodeStructTag* next; 
};
typedef struct nodeStructTag Node;

Node* newNode(Data data) {
    Node* temp = malloc(sizeof(Node));

    if (temp == NULL) {
        printf("ERROR: NullPointerException\n");
        exit(1);
    }

    temp->data = data;
    temp->next = NULL;

    return temp;
}