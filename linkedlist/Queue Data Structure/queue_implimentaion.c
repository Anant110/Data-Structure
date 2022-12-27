#include<stdio.h>
void enqueue(int x){
# define N 5
int queue[N];
int front=-1;
int rear=-1;
    if(rear==N-1){
        printf("Overflow condition");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
        printf("Element:%d\n",x);
    }
    else{
        rear++;
        queue[rear]=x;
         printf("Element:%d\n",x);
    }
}
int main(){
    enqueue(5);
    enqueue(3);
    enqueue(-1);
    enqueue(8);
    enqueue(9);

return 0;
}
