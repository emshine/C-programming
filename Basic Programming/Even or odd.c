#include<stdio.h>
int main()
{
    int flag =0,n;
    printf("Enetr number:");
    scanf("%d",&n);
    if(n%2==0)
    {
     flag=1;   
    }
    else 
        flag=0;
    if(flag ==0)
    {
        printf("The number %d is odd",n);
        
    }
    else
    {
        printf("The number %d is even ",n);
        
    }
    return 0;
}

---------------------------------------------------
Output:

Enetr number:4
The number 4 is even 