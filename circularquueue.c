#include <stdio.h>
#include <stdlib.h>
struct circularqueue
{
    int size, front, rear;
    int *arr;
};
void encircularqueue(struct circularqueue *q, int data)
{
    if ((q->rear+1)%q->size == q->front){
        printf("full hai queue and ");
        printf("%d cannot enqueue\n", data);
    }    
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear] = data;
    }
}
void circulardequeue(struct circularqueue *q)
{
    if(q->front==q->rear)
    printf("\ncannot dequeue anymore empty hai \n");
    else 
    {
        q->front=(q->front+1)%q->size;
        printf("%d ",q->arr[q->front]);
    }
}
int main()
{
    struct circularqueue *q;
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->front = 0;
    q->rear = 0;
    encircularqueue(q, 10);
    encircularqueue(q, 20);
    encircularqueue(q, 30);
    encircularqueue(q, 40);
    encircularqueue(q, 50);
    encircularqueue(q, 60);
    printf("dequeue is happening \n");
    circulardequeue(q);
    circulardequeue(q);
    circulardequeue(q);
    circulardequeue(q);
    circulardequeue(q);
    circulardequeue(q);
    return 0;
}
        //     .................double ended queue
// #include<stdio.h>
// #include<stdlib.h>
// struct dequeue{
//     int *arr;
//     int size,front,rear;
// };
// void enqueuerear(struct dequeue*q,int data){
//     if(q->rear==q->size-1)
//     printf("queue is full and %d cannot insert\n",data);
//     else {
//         q->rear++;
//         q->arr[q->rear]=data;
//     }
// }
// void enqueuefront(struct dequeue*q,int data){
//     if(q->front==-1){
//         printf("queue is full and %d cannot insert\n",data);
//     }
//     else{
//         q->arr[q->front]=data;
//         q->front--;
//     }
// }
// void dequeuefront(struct dequeue*q){
//     if(q->front==q->rear)
//     printf("sorry queue is empty\n");
//     else {
//         q->front++;
//         printf("%d ",q->arr[q->front]);
//     }
// }
// void dequeuerear(struct dequeue*q){
//     if(q->rear==q->front)
//     printf("cannot dequeue element\n ");
//     else {
//         printf("%d ",q->arr[q->rear]);
//         q->rear--;
//     }
// }
// int main(){
//     struct dequeue*q;
//     q->size=5;
//     q->arr=(int*)malloc(q->size*sizeof(int));
//     q->front=-1;
//     q->rear=-1;
//     enqueuerear(q,10);
//     enqueuerear(q,20);
//     enqueuerear(q,30);
//     enqueuerear(q,40);
//     enqueuerear(q,50);
//     enqueuerear(q,60);
//     dequeuefront(q);
//     dequeuefront(q);
//     dequeuefront(q);
//     printf("            \n\nnew functions \n\n");
//     enqueuefront(q,10);
//     enqueuefront(q,20);
//     enqueuefront(q,30);
//     enqueuefront(q,40);
//     dequeuerear(q);
//     dequeuerear(q);
//     dequeuerear(q);
//     dequeuerear(q);
//     dequeuerear(q);
//     dequeuerear(q);
//     return 0;
// }        
