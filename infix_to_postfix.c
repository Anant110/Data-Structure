#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int stackTop(struct stack*sp){
    return sp->arr[sp->top];
} 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedence(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }
    else if(ch=='+'|| ch=='-'){
        return 2;
    }
    else{
        return 1;
    }
}
int isoperator(char ch){
    if(ch=='*'|| ch=='/'|| ch=='+'|| ch=='-'){
        return 1;
    }
    else {
        return 0;
    }
}
void push(struct stack*ptr,char val){
    if (isFull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack*ptr){
    if (isEmpty(ptr)){
        printf("stack overflow\n");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char *infixtopostfix(char *infix){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *) malloc(sp->size * sizeof(char));
    char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;

    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if (precedence(infix[i])>precedence(stackTop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }  
        }
    }
    while(!isEmpty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
char *infix="a-b";
printf("postfix is %s",infixtopostfix(infix));
return 0;
}