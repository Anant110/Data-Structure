#include<stdio.h>

int areaofrectangle(int l,int b);
int main()
{
    int area;
    area=areaofrectangle(8,9);
printf("the area is %d\n",area);

return 0;
}

int areaofrectangle(int l,int b){
int area;
area=l*b;
return area;
}






