int pop(struct stackk* stackk)  
{  
    if (isEmpty(stackk))  
        return -1;  
    return stackk->array[stackk->top--];  
}
