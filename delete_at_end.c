//singly linked list

void delete_end(){
    tmp=p;
    struct node* pre;
    if(p==NULL)
        printf("\n no element to be deleted!! ");
    else if(p->next==NULL){
        printf("\nelement deleted - %d", p->data);
        p=NULL;
    } else {
        while(tmp->next!=NULL){
            pre=tmp;
            tmp=tmp->next;
        }
        printf("\nelement deleted - %d", tmp->data);
        pre->next=NULL;
    }
}
