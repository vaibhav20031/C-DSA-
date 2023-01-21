#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size, front, rear;
    int *arr;
};
void enqueue(struct queue *q, int data)
{
    if (q->rear == q->size - 1){
        printf("full hai queue and ");
        printf("%d cannot enqueue\n", data);
    }    
    else
    {
        q->rear++;
        q->arr[q->rear] = data;
    }
}
void dequeue(struct queue *q)
{
    if(q->front==q->rear)
    printf("\ncannot dequeue anymore empty hai \n");
    else 
    {
        q->front++;
        printf("%d ",q->arr[q->front]);
    }
}
int main()
{
    struct queue *q;
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->front = -1;
    q->rear = -1;
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    enqueue(q, 60);
    printf("dequeue is happening \n");
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    return 0;
}

