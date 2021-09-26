#include<stdio.h>
void add(int x,int y);
void sub(int x,int y);
void mul(int x,int y);
void div(int x,int y);
void mod(int x,int y);
void main()
{
    int a,b;
    printf("Enter any two number: ");
    scanf("%d%d ",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    mod(a,b);
    return 0;
}
void add(int x, int y)
{
    printf("\n%d %d %d",x,y,x+y);

}
void sub(int x, int y)
{
    printf("\n%d %d %d",x,y,x-y);
}
void mul(int x, int y)
{
    printf("\n%d %d %d",x,y,x*y);
}
void div(int x, int y)
{
    printf("\n%d %d %d",x,y,x/y);
}
void mod(int x, int y)
{
    printf("\n%d %d %d",x,y,x%y);
}
