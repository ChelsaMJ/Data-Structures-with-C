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

// In main ()  
struct bt *root=(struct bt *)malloc(sizeof(struct bt));  
root->data=-1;  
insert(root,3,'l');  
insert(root,2,'r');  
insert(root->left,5,'l');  
insert(root->right,7,'l');
