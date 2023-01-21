#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data ;
    int size ;
    int *arr;
    int top;
    int temptop;
};
void traverse(struct stack*s){
    int temptop=s->top;
    if(temptop==-1)
        printf("no elements for printing \n");
    else{
        while(temptop>=0){
            printf("%d ",s->arr[temptop]);
            temptop--;
        }
    }    
}
void insert(struct stack*s,int data){
    if(s->top==s->size-1){
        printf("stack is full and cannot insert=%d \n",data);
    }
    else{
        s->top++;
        s->arr[s->top]=data ;
    }
}
int pop(struct stack*s){
    if(s->top==-1){
        printf("stack is empty for popping \n");
        return -1;
    }
    else{
        int data=s->arr[s->top];
        s->top--;
        return data ;
    }
}
int peek(struct stack*s,int position){
    if(s->top-position+1>=0){
        return(s->arr[s->top-position+1]); 
    }
    else 
    return -1;
}
int main(){
    struct stack *s;
    s->size =5;
    s->arr=(int*)malloc(s->size*sizeof(int));
    s->top=-1;
    int popvalue,peekvalue;
    insert(s,10);
    insert(s,20);
    insert(s,30);
    insert(s,40);
    insert(s,50);
    insert(s,60);
    printf("\ntraversing of elements \n");
    traverse(s);
    printf("\npopping the top elements\n ");
    popvalue=pop(s);
    printf("%d\n",popvalue);
    printf("\npeeking the elements\n ");
    peekvalue=peek(s,3);
    printf("%d\n",peekvalue);
    printf("\ntraversing of elements \n");
    traverse(s);
    return 0;
}