#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
//  To form the series, set the values
 printf("Enter the number of elements:");    
 scanf("%d",&number);  

 printf("\n%d %d",n1,n2);
 //printing 0 and 1    

 for(i=2;i<number;++i)
 //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3); 
//   Print the value of n3
  n1=n2;    
  n2=n3;    
//   Swap the values
 }  
  return 0;  
 }    