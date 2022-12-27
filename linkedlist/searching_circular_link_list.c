#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linklist(struct node* head){
    struct node*p=head;
    while(p->next!=head){
        printf("Element: %d\n",p->data);
        p=p->next;
    }
    printf("Element: %d\n",p->data);
}

struct node*searchelement(struct node*head,int value){
    struct node*ptr=head;
    int i;
    for(int i=0;i<ptr->data!=value;i++){
        ptr=ptr->next;
    }
    printf("Element at index %d\n",i+1);
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
head=(struct node*)malloc(sizeof (struct node));
second=(struct node*)malloc(sizeof (struct node));
third=(struct node*)malloc(sizeof (struct node));
fourth=(struct node*)malloc(sizeof (struct node));

head->data=45;
head->next=second;

second->data=90;
second->next=third;

third->data=93;
third->next=fourth;

fourth->data=87;
fourth->next=NULL;

head=searchelement(head,93);
linklist(head);
return 0;
}