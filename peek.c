int peek(struct stackk* stackk)  
{  
    if (isEmpty(stackk))  
        return NT_MIN;  
    return stackk->array[stackk->top];  
}
