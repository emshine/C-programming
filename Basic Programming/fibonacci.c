

#include <stdio.h>

int main ()
{
  
int x,first,second,third,i;
first=0;
second=1;
printf("Enter the number of terms:\t");
scanf("%d",&x);
for(i=0;i<x;i++)
{
    if(i<=1)
    {
        third=i;
    }
    else
    {
        third=first+second;
        second=third;
        first=second;
        
    }
    printf("%d",third);
}

return 0;
}





OUTPUT:

Enter the number of terms:	5
01124