void postorder(struct bt *q)  
{  
    if(q!=NULL)  
    {  
        postorder(q->left);  
        postorder(q->right);  
        printf(" %d ",q->data);  
    }  
}
