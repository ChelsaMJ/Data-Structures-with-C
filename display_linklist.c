//display elements in the linked list

void display()
{
    tmp=p;
    while(tmp!=NULL)
    {
        printf("\n %d",tmp->data);
        tmp=tmp->next;
    }
}
