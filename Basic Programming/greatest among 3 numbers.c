#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("Enter three number's:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    if(c>a)
    {
        x=c;
    }
    printf("The Greatest number is :%d",x);
    return 0;
}


---------------------------------------------------

Output:

Enter three number's:
4
3
7
The Greatest number is :7