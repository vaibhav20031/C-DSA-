#include<stdio.h>
int visited[5]={0,0,0,0,0};
int a[5][5]={
    {0,1,0,0,1},
    {1,0,1,1,1},
    {0,1,0,1,0},
    {0,1,1,0,1},
    {1,1,0,1,0}
};
void dfs(int i){
    printf("%d ",i);
    visited[i]=1;
    for(int j=0;j<5;j++){
        if(a[i][j]==1 && !visited[j]){
            dfs(j);
        }
    }
}
int main(){
    printf("       dFS TRAVERSAL \n");
    dfs(4);
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// struct queue
// {
//     int size, front, rear;
//     int *arr;
// };
// int isempty(struct queue *q){
//     if(q->rear==q->front)
//     return 1;
//     else
//     return 0;
// }
// void enqueue(struct queue *q, int data)
// {
//     if (q->rear == q->size - 1){
//         printf("full hai queue and ");
//         printf("%d cannot enqueue\n", data);
//     }    
//     else
//     {
//         q->rear++;
//         q->arr[q->rear] = data;
//     }
// }
// int dequeue(struct queue *q)
// {
//     if(q->front==q->rear)
//     printf("\ncannot dequeue anymore empty hai \n");
//     else 
//     {
//         q->front++;
//         return q->arr[q->front];
//     }
// }
// int main()
// {
//     printf("      BFS TRAVERSAL       \n");
//     struct queue *q;
//     q->size = 5;
//     q->arr = (int *)malloc(q->size * sizeof(int));
//     q->front = -1;
//     q->rear = -1;
//     int visited[5]={0,0,0,0,0};
//     int a[5][5]={
//     {0,1,0,0,1},
//     {1,0,1,1,1},
//     {0,1,0,1,0},
//     {0,1,1,0,1},
//     {1,1,0,1,0}
//     };
//     int node ;
//     int i=0;
//     visited[i]=1;
//     printf("%d ",i);
//     enqueue(q,i);
//     while(!isempty(q)){
//         node=dequeue(q);
//         for(int j=0;j<5;j++){
//             if(a[node][j]==1 && !visited[j]){
//                 printf("%d ",j);
//                 visited[j]=1;
//                 enqueue(q,j);
//             }
//         }
//     }
//     return 0;
// }


