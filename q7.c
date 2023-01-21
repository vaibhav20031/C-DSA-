#include<stdio.h>
#include<stdlib.h>
struct tree{
    char *type;
    char *company;
    int year;
    struct tree *left;
    struct tree *right;
};
struct tree *createchild(int year,char type[],char company[]){
    struct tree*child=(struct tree*)malloc(sizeof(struct tree));
    child->year=year;
    child->type=type;
    child->company=company;
    child->left=NULL;
    child->right=NULL;
    return child;
}
void inorder(struct tree *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d  ",root->year);
        printf("%s  ",root->type);
        printf("%s  ",root->company);
        printf("\n");
        inorder(root->right);
    }
}
void preorder(struct tree *root){
    if(root!=NULL){
        printf("%d  ",root->year);
        printf("%s  ",root->type);
        printf("%s  ",root->company);
        printf("\n");
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct tree *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d  ",root->year);
        printf("%s  ",root->type);
        printf("%s  ",root->company);
        printf("\n");
    }
}
void insert(struct tree*root,int key,char type[],char company[] ){
    struct tree*prev=NULL;
    while(root!=NULL){
        prev=root ;
        if(key==root->year)
        printf("cannot insert\n");
        else if(key>root->year){
            root=root->right;
        }
        else if(key<root->year){
            root=root->left;
        }
    }
    struct tree*newchild=createchild(key,type,company);
    if(key>prev->year)
    prev->right =newchild;
    else 
    prev->left=newchild;
}
struct tree*predecesor(struct tree *root ){
    root =root ->left;
    while(root->right!=NULL ){
        root=root->right ;
    }
    return root ;
}
struct tree*delete(struct tree *root,int value){
    struct tree*iorderpred;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right ==NULL){
        free(root);
        return NULL ;
    }
    if(value<root->year){
        root->left=delete(root->left,value);
    }
    else if(value>root->year){
        root->right=delete(root->right,value);
    }
    else{
        iorderpred=predecesor(root);
        root->year=iorderpred->year;
        root->left=delete(root->left,iorderpred->year);
    }
    return root ;
}
int main(){
    struct tree*root=createchild(2016,"hatchback","suzuki");
    struct tree*child1=createchild(2015,"SUV","hyundai");
    struct tree*child2=createchild(2017,"hatchback","hyundai");
    struct tree*child3=createchild(2018,"hatchback","hyundai");
    struct tree*child4=createchild(2014,"SUV","hyundai");
    root->left=child1;
    root->right=child2;
    child1->left=child4;
    child2->right=child3;                    
    printf(".........inorder ........\n");
    printf("displaying data ...\n");
    inorder(root);
    printf("\n");
    // printf(".........preorder........ \n");
    // preorder(root);
    // printf("\n");
    // printf(".........postorder........r \n");
    // postorder(root);
    printf("\n");
    printf("..........perform insertion......... \n");
    insert(root,2020,"SUV","mahindra");
    inorder(root);
    printf("\n........deletion tree \n");
    root=delete(root,2020);
    inorder(root);
    return 0;
}