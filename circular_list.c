#include<stdio.h>
#include<stdlib.h>
struct list{
    int data ;
    struct list*next ;
};
void traversal(struct list*head){
    struct list*store=head;
    do{
        printf("%d ",store->data);
        store=store->next;
    }while(store!=head);
}
struct list* insertfront(struct list*head,int data ){
    struct list*store=head;
    struct list*newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data=data ;
    while(store->next!=head){
        store =store ->next ;
    }
    store->next=newnode ;
    newnode->next=head;
    head=newnode ;
    return head;
}
struct list* insertend(struct list*head,int data ){
    struct list*store=head;
    struct list*newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data=data ;
    while(store->next!=head){
        store =store ->next ;
    }
    store->next=newnode ;
    newnode->next=head;
    return head;
}
struct list* insertposition(struct list*head,int data,int position ){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data =data ;
    int count =1 ;
    if(position ==1){
        head=insertfront(head,data);
        return head ;
    }
    else {
        struct list*store=head;
        while(count<position-1){
            store=store->next ;
            count ++;
        }
        newnode->next=store->next ;
        store->next=newnode ;
        return head ;
    }
}
struct list* deletefront(struct list*head){
    struct list*store=head ;
    struct list*h=head ;
    while(store->next!=head){
        store=store->next;
    }
    head=head->next;
    store->next=head;
    free(h);
    return head;
}
void deleteend(struct list*head){
    struct list*p=NULL ;
    struct list*q=head ;
    while(q->next!=head){
        p=q ;
        q=q->next;
    }
    p->next=q->next ;
    free(q);
}
struct list* deleteposition(struct list *head,int position){
    int count =1;
    struct list*p=NULL;
    struct list*q=head ;
    if(position==1){
        head=deletefront(head);
        return head ;
    }
    else{
        while(count<position ){
            count ++;
            p=q;
            q=q->next ;
        }
        p->next=q->next ;
        free(q);
        return head ;
    }
}
int main(){
    struct list*head=(struct list*)malloc(sizeof(struct list));
    head->data=10;
    head->next=head;
    head=insertfront(head,20);
    head=insertfront(head,30);
    head=insertend(head,40);
    head=insertposition(head,50,2);
    traversal(head);
    printf("\n AFTER DELETION \n");
    head=deletefront(head);
    deleteend(head);
    head=deleteposition(head,2);
    traversal(head);
    return 0;
}