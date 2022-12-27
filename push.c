#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr){
  if(ptr->top==ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
}
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack*ptr,int val){
    if (isfull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){
    if (isEmpty(ptr)){
        printf("stack overflow\n");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack*sp,int i){
    if(sp->top-1+1<0){
        printf("Invalid position\n");
    }
    else{
        return sp->arr[sp->top-i+1];
    }
}
int stackTop(struct stack*sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack*sp){
    return sp->arr[0];
}

int main()
{
struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
sp->size=8;
sp->top=-1;
sp->arr=(int *)malloc(sizeof(int));
printf("Stack has been created successfully\n");

printf("%d\n",isfull(sp));
printf("%d\n",isEmpty(sp));
push(sp,67);
push(sp,56);
push(sp,45);
push(sp,90);
push(sp,12);
push(sp,34);
push(sp,51);
push(sp,23);
// push(sp,56);->Gives the cndition of stack overflow
   printf("Full:%d\n",isfull(sp)); 
   printf("Empty:%d\n",isEmpty(sp));

// printf("%d is popped from the stack\n",pop(sp));
// printf("%d is popped from the stack\n",pop(sp));
// printf("%d is popped from the stack\n",pop(sp));
// printf("%d is popped from the stack\n",pop(sp));

for(int j=1;j<= sp->top+1;j++){
    printf("The value of position %d is %d\n",j,peek(sp,j));
}
printf("The top most element of stack is %d\n",stackTop(sp));
printf("The bottom most element of stack is %d",stackBottom(sp));
return 0;
}