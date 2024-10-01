//singly linked list

void delete_beg(){
    tmp=p;
    if(p==NULL)
        printf("\n no element to be deleted!! ");
    else{
        printf("\nelement deleted - %d", p->data);
        p=p->next;
    }
}
