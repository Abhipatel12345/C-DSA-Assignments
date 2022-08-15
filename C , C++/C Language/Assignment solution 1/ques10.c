#include<stdio.h>
int main()
{
    int Date,Month,Year;

    scanf("%d/%d/%d",&Date,&Month,&Year);

    printf("DD/MM/YYY %d/%d/%d \n",Date,Month,Year);

    printf("Date -%d , ",Date);
    printf("Month -%d , ",Month);
    printf("year -%d , ",Year);


    return 0;
}

