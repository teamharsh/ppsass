
#include<stdio.h>

int main()

{

 int a,b;

 printf("Eter the numbers =\n");

 scanf("\n%d\n%d",&a,&b);

 

 a=a+b;

 b=a-b; 

 a=a-b;

 

 printf("\na is %d",a);

 printf("\nb is %d\n",b);

 

 return 0;

}
