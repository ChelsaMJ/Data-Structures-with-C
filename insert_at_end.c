void insert_end(int ele)
{
    tmp=p;
    tmpl=(struct node*)malloc(sizeof(struct node));
    tmpl->data=ele;
    tmpl->next=NULL;
    if(p==NULL)
    {
        p=tmpl;
    }
    else
    {
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=tmpl;
    }
}
