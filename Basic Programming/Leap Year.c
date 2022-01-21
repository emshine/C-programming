#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year:");
    scanf("%d",&x);
    if(x%400==0 && x%100==0 )
    {
        printf("The year  %d is leap year",x);
    }
    else if(x%100!=0 && x%4==0)
    {
        printf("The year  %d is leap year",x);
    }
    else
    
        printf("The year  %d is not leap year",x);
        
    return 0;
}


-----------------------------------------------------------------
Output:

Enter the year:2036
The year  2036 is leap year.


Enter the year:3000
The year  3000 is not leap year