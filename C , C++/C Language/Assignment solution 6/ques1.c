#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a number \n",a);
    scanf("%d",&a);
    while(a>=1)
    {
        d=a/10;
        b=d*10;
        c=d-b;
        printf("%d ",c);
        break;

    }
    return 0;

}
