#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data ;
    struct stack*next ;

};
void traverse(struct stack*head){
    while(head!=NULL){
        printf("%d",head->data);
        printf("  ");
        head=head->next;
    }
}
struct stack* push(int data,struct stack* head){
    struct stack*newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=data;
    newnode ->next=head;
    head=newnode;
    return head;
}
struct stack* pop(struct stack* head){
    struct stack*p=head;
    head=head->next;
    free(p);
    return head;
}
int peek(struct stack*head,int position){
    if(position==1){
        printf("\n");
        printf("peek element= %d",head->data);
    }    
    else{
        int count =1 ;
        while(count<position){
            count++;
            head=head->next ;
        }
        printf("\n");
        printf("peek element= %d",head->data );
    }
}
int main(){
    struct stack*head=NULL;
    head=push(10,head);
    head=push(20,head);
    head=push(30,head);
    head=push(40,head);
    printf("print karte hain \n");
    traverse(head);
    head=pop(head);
    printf("\ndelete karte hain\n");
    traverse(head);
    peek(head,2);
    return 0;
}

