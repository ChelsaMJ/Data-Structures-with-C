void enqueue(struct que* que, int item)  
{  
    if (isFull(que))  
        return;  
    que->rear = que->rear + 1;  
    que->arr[que->rear] = item;  
    que->size = que->size + 1;  
    if (que->front == -1)  
        que->front++;  
    printf("%d enqueued to que\n", item);  
}
