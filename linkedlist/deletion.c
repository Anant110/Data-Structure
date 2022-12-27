#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linklist(struct node* ptr){
    while(ptr!=NULL){
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

//Deletion of an element at first node
struct node *deletefirst(struct node*head){
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

//Deletion of an element at index
struct node*deleteatindex(struct node*head,int index){
    struct node*p=head;
    struct node*q=head->next;
    for(int i =0; i < index-1; i++)
    {
       p=p->next;
       q=q->next;
    }
    p->next=q->next;
    free(q);  
    return head; 
}

//Deletion of a last element
struct node*deleteatlast(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
while(q->next!=NULL){
   
   p=p->next;
   q=q->next;
}
p=p->next=NULL;
free(q);
return head;
}
//Delete at given value
struct node *deleteatgivenvalue(struct node*head,int value){
    struct node*p=head;
    struct node*q=head->next;
    while(q->data!=value &&q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;

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

printf("Linked list before deletion\n");
linklist(head);

printf("Linked list after deletion\n");
// head=deletefirst(head);
// head=deleteatindex(head,2);
// head=deleteatlast(head);
// linklist(head);

head=deleteatgivenvalue(head,93);
linklist(head);

return 0;
}