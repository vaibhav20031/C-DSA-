#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data ;
    struct queue*next;
};
void traverse(struct queue*head){
    while(head!=NULL){
        printf("%d",head->data);
        printf("  ");
        head=head->next;
    }
}
void insert(int data,struct queue* head){
    struct queue*newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->data =data ;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=newnode ;
    newnode ->next=NULL ;
}
struct queue*delete(struct queue*head){
    head=head->next;
    return head;
}
int main(){
    struct queue*head=(struct queue*)malloc(sizeof(struct queue));
    head->data=10;
    head->next=NULL;
    insert(20,head);
    insert(30,head);
    insert(40,head);
    printf("display karte hain \n");
    traverse(head);
    head=delete(head);
    printf("\ndelete karte hain \n");
    traverse(head);
    return 0;
}