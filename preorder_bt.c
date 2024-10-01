void preorder(struct bt *q)  
{  
    if(q!=NULL)  
    {  
        printf(" %d ",q->data);  
        preorder(q->left);  
        preorder(q->right);  
    }  
}
