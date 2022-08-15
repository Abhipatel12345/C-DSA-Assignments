#include<stdio.h>
int main()
{
    int i=0 ,n;

    printf("Enter any number :: ");
    scanf ("%d",&n);

   do{

        printf("%d x %d = %d \n ",n,i,n*i);
i++;
    } while(i<=10);
 return 0;
}
