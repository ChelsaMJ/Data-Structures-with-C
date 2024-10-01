struct bst *search(struct bst *p, int key, struct bst **y)  
{  
    struct bst *temp;  
    if (p == NULL)  
        return (NULL);  
    temp = p;  
    *y = NULL;  
    while (temp != NULL)  
    {  
        if (temp->data == key)  
            return (temp);  
        else  
        {  
            *y = temp; /*store this pointer as root */  
if(temp->data > key)  
    temp = temp->left;  
else  
    temp = temp->right;  
}  
}  
return (NULL);  
}
