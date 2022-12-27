#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createnode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node*root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
struct node*p=createnode(7);
struct node*p1=createnode(4);
struct node*p2=createnode(6);
struct node*p3=createnode(8);
struct node*p4=createnode(9);


p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;

preorder(p);

return 0;
}