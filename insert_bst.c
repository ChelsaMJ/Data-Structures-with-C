struct bst * insert(struct bst *q, int val)  
{  
    struct bst *temp;  
    if(q == NULL)  
    {  
        temp = (struct bst *)malloc(sizeof(struct bst));  
        temp->data = val;  
        temp->left = NULL;  
        temp->right = NULL;  
        q = temp;  
    }  
    else  
    {  
        if(val < q->data)  
        {  
            q->left = insert(q->left, val);  
        }  
        else  
        {  
            q->right = insert(q->right, val);  
        }  
    }  
    return q;  
}
