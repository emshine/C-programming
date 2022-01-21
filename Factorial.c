#include<stdio.h>
int fact(int);    //Function declaration,Formal parameter is used.
int main ()
{
    int n,x;
    printf("Enter the Number:");
    scanf("%d",&n);
    x=fact(n);     // n is an argument,actual parameter is used.
    printf("The Factotial of a number is %d",x);

    return 0;
}

 int fact (int a)
 {
     int f=1;
     while(a>0)
     {
         f=f*a;
         a=a-1;
     }
 
     return f;
 }
 
---------------------------------------------------------------------
Output:

Enter the Number:5
The Factotial of a number is 120