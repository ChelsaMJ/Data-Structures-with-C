struct bt * insert(struct bt *q,int val, char dir)  
{  
    struct bt *tmp;  
    tmp=(struct bt *)malloc(sizeof(struct bt));  
    tmp->data=val;  
    tmp->left=tmp->right=NULL;  
    if(dir=='l')  
        q->left=tmp;  
    else  
        q->right=tmp;  
}
