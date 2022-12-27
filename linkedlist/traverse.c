// Algorithm
// STEP 1: SET PTR = HEAD
// STEP 2: IF PTR = NULL
//    WRITE "EMPTY LIST"
//   GOTO STEP 7
//   END OF IF

// STEP 4: REPEAT STEP 5 AND 6 UNTIL PTR != NULL
// STEP 5: PRINT PTR→ DATA
// STEP 6: PTR = PTR → NEXT
// [END OF LOOP]

// STEP 7: EXIT

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