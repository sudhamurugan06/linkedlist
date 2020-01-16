void append(struct Node* price ){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->price=price;
newnode->next=head;
head=newnode;
}
