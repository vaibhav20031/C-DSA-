#include<stdio.h>
#include<stdlib.h>
struct list{
    char*name ;
    int age  ;
    int rollno;
    struct list*next ;
};
void traversal(struct list*head){
    while(head!=NULL ){
        printf("%s ",head->name);
        printf("%d ",head->age);
        printf("%d \n",head->rollno);
        head=head->next ;
    }
}
struct list* insertfront(struct list*head,char*name,int age,int rollno){
    struct list*newnode=(struct list*)malloc(sizeof(struct list));
    newnode->name=name;
    newnode->age=age;
    newnode->rollno=rollno;
    newnode->next=head;
    head=newnode;
    return head;
}
void insertend(struct list*head,char*name,int age,int rollno){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    newnode->name=name;
    newnode->age=age;
    newnode->rollno=rollno;
    newnode->next=NULL;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=newnode;
}
struct list* insertposition(struct list*head,char*name,int age,int rollno,int position){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    newnode->name=name;
    newnode->age=age;
    newnode->rollno=rollno;
    int count =1 ;
    if(position ==1){
        head=insertfront(head,name,age,rollno);
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
    struct list *p=NULL ;
    struct list *q=head;
    while(q->next!=NULL ){
        p=q;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}
struct list* deleteposition(struct list*head,int rollno){
    if(head->rollno==rollno){
        head=deletefront(head);
        return head ;
    }
    else {
        struct list*p=NULL ;
        struct list*q=head;
        while(q->rollno!=rollno && q->next!=NULL){
            p=q;
            q=q->next;
        }
        if(q->rollno!=rollno ){
            printf("cannot find \n");
            return head;
        }
        else{
            p->next=q->next;
            free(q);
            return head;
        }
    }
}
struct list* reverse(struct list*head){
    struct list*prev=NULL ;
    struct list*current=head;
    struct list*nextnext;
    while(current!=NULL){
        nextnext=current->next ;
        current->next=prev;
        prev=current;
        current=nextnext ;
    }
    head=prev;
    return head;
}
int main(){
    struct list*head=(struct list*)malloc(sizeof(struct list));
    head->name="vaibhav";
    head->age=19;
    head->rollno=21;
    head->next=NULL ;
    // head=NULL ;     //.......hn hn bana sakta ha mere bhai vaibhav aggarwal................
    head=insertfront(head,"kunal",17,22);
    insertend(head,"ganeshji",20,23);
    head=insertposition(head,"vishnuji",22,24,2);
    traversal(head);
    printf("............after deletion \n");
    head=deletefront(head);
    deleteend(head);
    head=deleteposition(head,29);
    head=deleteposition(head,21);
    printf("...........reverse list is \n");
    head=reverse(head);
    traversal(head);
    return 0;
}