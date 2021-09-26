// Write a program to reverse the order
#include<stdio.h>
int main()
{
    int num , rev =0 ,rem;
    printf("Please enter a number.  ");
    scanf("%d",&num);
    printf("number without reverse :");
    printf("%d\n",num);
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        rev = (rev*10)+rem;
    }

    printf("number with reverse : ");
    printf("%d",rev);

    return 0;
}
