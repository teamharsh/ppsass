#include<stdio.h>

int main()

{

 int size,find,count=0;

 printf("Enter the size of array = ");

 scanf("%d",&size);

 int A[size];

 printf("\nEnter the values in this array\n");

 for(int i=0;i<size;i++)

 {

  printf("Enter value at index %d = ",i);

  scanf("%d",&A[i]);

 }

 

 printf("\nEnter the value to be search in this array = ");

 scanf("%d",&find);

 

 for(int i=0;i<size;i++)

 { 

  if(find==A[i])

   count++; 

 }

 

 if(count>0)

 printf("Yes %d is found %d times in this array.",find,count);

  

 else

 printf("Not found in this array.");

 return 0;

}
