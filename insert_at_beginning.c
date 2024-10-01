//singly linked list

void insert_beg(int ele)
{
    struct node *tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = ele;
    if(p == NULL) {
        tmp->next = NULL;
    } else {
        tmp->next = p;
    }
    p = tmp;
}
