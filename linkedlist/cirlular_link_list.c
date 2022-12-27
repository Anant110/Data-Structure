#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linklist(struct node* head){
    struct node*p=head;
    while(p->next!=head){
        printf("Element is %d\n",p->data);
        p=p->next;
    }
    printf("Element is %d\n",p->data);
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

linklist(head);
return 0;
}