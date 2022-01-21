#include<stdio.h>
int mult(int);    //Function declaration,Formal parameter is used.
int main ()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    mult(n);     // n is an argument,actual parameter is used.
    

    return 0;
}

 int mult (int a)
 {
     int f=1;
     for(int i =1;i<=10;i++)
     {
         f=a*i;
         printf(" %d * %d = %d \n",a,i,f);
     }
 
 }
 

------------------------------------------------------------------------------

Enter the Number:6
6 * 1 = 6 
 6 * 2 = 12 
 6 * 3 = 18 
 6 * 4 = 24 
 6 * 5 = 30 
 6 * 6 = 36 
 6 * 7 = 42 
 6 * 8 = 48 
 6 * 9 = 54 
 6 * 10 = 60 
