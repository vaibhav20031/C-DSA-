#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data ;
    struct tree *left;
    struct tree *right;
};
struct tree *createchild(int data){
    struct tree*child=(struct tree*)malloc(sizeof(struct tree));
    child->data=data;
    child->left=NULL;
    child->right=NULL;
    return child;
}
void inorder(struct tree *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(struct tree *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct tree *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
// int bstsearch(struct tree *root,int key){
//     if(root==NULL)
//     return 0;
//     if(root->data==key)
//     return 1 ;
//     else if(key>root->data)
//     bstsearch(root->right,key);
//     else
//     bstsearch(root->left,key);
// }
// void insert(struct tree*root,int key){
//     struct tree*prev=NULL;
//     while(root!=NULL){
//         prev=root ;
//         if(key==root->data)
//         printf("cannot insert\n");
//         else if(key>root->data){
//             root=root->right;
//         }
//         else if(key<root->data){
//             root=root->left;
//         }
//     }
//     struct tree*newchild=createchild(key);
//     if(key>prev->data)
//     prev->right =newchild;
//     else 
//     prev->left=newchild;
// }
int bst(struct tree *root){
    static struct tree *prev=NULL;
    if(root!=NULL){
        if(!bst(root->left))
        return 0;
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root ;
        return(bst(root->right));
    }
    else 
    return 1 ;
}
// struct tree*predecesor(struct tree *root ){
//     root =root ->left;
//     while(root->right!=NULL ){
//         root=root->right ;
//     }
//     return root ;
// }
// struct tree*delete(struct tree *root,int value  ){
//     struct tree*iorderpred;
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->left==NULL && root->right ==NULL){
//         free(root);
//         return NULL ;
//     }
//     if(value<root->data){
//         root->left=delete(root->left,value);
//     }
//     else if(value>root->data){
//         root->right=delete(root->right,value);
//     }
//     else{
//         iorderpred=predecesor(root);
//         root->data=iorderpred->data;
//         root->left=delete(root->left,iorderpred->data);
//     }
//     return root ;
// }
int main(){
    struct tree*root=createchild(40);
    struct tree*child1=createchild(20);
    struct tree*child2=createchild(50);
    struct tree*child3=createchild(10);
    struct tree*child4=createchild(30);
    struct tree*child5=createchild(60);
    root->left=child1;
    root->right=child2;
    child1->left=child3;
    child1->right=child4;
    child2->right=child5;
    child3->left=NULL;
    child4->left=NULL;
    child5->left=NULL;
    child3->right=NULL;
    child4->right=NULL;
    child5->right=NULL;

    //                  40
    //                  / \
    //               20      50
    //               / \      \
    //             10   30     60
    // 
    // 
    printf("inorder \n");
    inorder(root);
    // printf("\n");
    // printf("preorder \n");
    // preorder(root);
    // printf("\n");
    // printf("postorder \n");
    // postorder(root);
    // printf("\n");
    // printf("treeserch \n");
    // if(bstsearch(root,670))
    // printf("found \n");
    // else
    // printf("not found \n");
    // printf("perform insertion \n");
    // insert(root,0);
    // printf("AFTER INSERTION INORDER :\n");
    // inorder(root);
    // printf("\ndeletion tree \n");
    // root=delete(root,40);
    // printf("AFTER DELETION INORDER :\n");
    // inorder(root);
    if(bst(root))
    printf("yes it is a bst \n");
    else 
    printf("no it is not a bst\n");
    return 0;
}
