#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the number:\t");
    scanf("%lf %lf",&a,&b);
    c=a*b;
    printf("Product = %.2lf",c);
    return 0;
}


-------------------------------------
Output:

Enter the number:
4.6
5.4
Product = 24.84