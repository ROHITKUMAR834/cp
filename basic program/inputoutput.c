
//print output Basic salary = 20000
/*
#include<stdio.h>
int main()
{
    int basic = 2000;
    printf("Basic salary = %d",basic);
    return 0;
}
*/

// getchar and putchar
/*
#include<stdio.h>
int main()
{
  /*  char ch;
    printf("Enter acharacter ");
    ch=getchar();
    printf("The entered  charactered is ");
    putchar(ch);

    *//*
    printf("Indian \b is great \n");
    printf("New\rDelhi \n");


    //output Indian is great
    //Delhi
*/
// write aprogram to print in decimal,octal,&hexadecimal
/*
    int i;
  //  for(i=1;i<101;i++)
    //{//take a decimal number and print there octal and hexadecimal
    printf("enter any number ");
    scanf("%d",&i);

  //  printf("a = %d\t",i);
    printf("a = %o\t",i);
    printf("a = %x\t\n",i);
    //}
    return 0;
}
*/
//fix the width of the digit
/*

#include<stdio.h>
void main()
{
    float al,bl,a2,b2,a3,b3;
al=2;
bl=6.8;
a2=4.2;
b2=3.57;
a3=9.82;
b3=85.673;
printf("%5.1f,%4.2f\n",al,bl) ;
printf("%5.1f,%6.2f\n",a2,b2) ;
printf("%7.1f,%8.2f\n",a3,b3) ;

}

*/

#include<stdio.h>
void main()
{
    printf("%10s\n","India") ;
printf("%4s\n ","India") ;
printf("%.2s\n","India") ;
printf("%5.2s\n ","India") ;

printf(" I love my india ");

}



