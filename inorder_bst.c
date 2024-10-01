void inorder(struct bt *q)  
{  
    if(q == NULL)  
    {  
        return;  
    }  
    inorder(q->left);  
    printf(" %d ", q->data);  
    inorder(q->right);  
}
