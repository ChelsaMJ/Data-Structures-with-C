void push(struct stackk* stackk, int item)  
{  
    if (isFull(stackk))  
        return;  
    stackk->array[++stackk->top] = item;  
}
