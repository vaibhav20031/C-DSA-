#include<stdio.h>
#include<stdlib.h>
struct list{
    int data ;
    struct list*next ;
};
void traversal(struct list*head){
    while(head!=NULL ){
        printf("%d ",head->data);
        head=head->next ;
    }
}
struct list* insertfront(struct list*head,int data ){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data =data ;
    newnode->next=head;
    head=newnode ;
    return head ;
}
void insertend(struct list*head,int data ){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data =data ;
    newnode->next=NULL ;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=newnode ;
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
        struct list*h=head;
        while(count<position-1){
            h=h->next ;
            count ++;
        }
        newnode->next=h->next ;
        h->next=newnode ;
        return head ;
    }
}
struct list* deletefront(struct list*head){
    struct list*h=head ;
    head=head->next;
    free(h);
    return head;
}
void deleteend(struct list*head){
    struct list*p=NULL;
    struct list*q=head ;
    while(q->next!=NULL){
        p=q ;
        q=q->next ;
    }
    p->next=NULL;
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
        while(count<position && q->next!=NULL){
            count ++;
            p=q;
            q=q->next ;
        }
        if(count==position){
            p->next=q->next ;
            free(q);
            return head;
        }
        else 
        printf("cannot find element \n");
        return head ;
    }
}
int main(){
    struct list *head=(struct list*)malloc(sizeof(struct list));
    head->data=10;
    head->next=NULL;
    head=insertfront(head,20);
    insertend(head,30);
    head=insertposition(head ,100,3);
    traversal(head);
    printf("\ntraversal after deletion\n");
    head=deletefront(head);
    deleteend(head);
    head=deleteposition(head,3);
    // head=deleteposition(head,2);
    traversal(head);
    return 0;
}