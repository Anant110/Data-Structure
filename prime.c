#include<stdio.h>
int main()
{
    int j,i,flag=0,count=0;
    for (i=50;i<=150;i++)
    {
        
            for (j=2;j<i;j++){
                if(i%j!=0){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
                if (flag==1){
                    count++;
                    printf( "prime is %d\n",i);
                }
    }
    return 0;
}