#include<stdio.h>
int main()
{
    int a;
    float b;
    int c;
    a = 34;
    b = 6.34;
    c = 3;
    float f;
    f = 6.0;
    
    printf("a+b- %f\n", a+b);
    printf("a-b- %f\n",a-b);
    printf("a/b- %f\n",a/b);
    printf("a*b- %f\n",a*b);
    printf("FLoating Point %f\n",a/b);
    printf("Relationals Operator %d\n", a==b);
    printf("Relationals Operator %d\n", a>b);
    printf("Relationals Operator %d\n", a<b);
    printf("Relationals Operator %d\n", a!=b);
    printf("Logical Operator %d\n", a&&c);
    printf("Logical Operator %d\n", a||c);
    printf("Logical Operator %d\n", !(a&&c));
    return 0;
}