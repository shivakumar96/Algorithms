/* to print no of bits set to 1 for a given number */

#include<stdio.h>
int main(){

int n , i , j , k , m,count = 0;

j = sizeof(int)*8 ;
k = 1 ;
printf("Enter number ");
scanf("%d",&n);
m = n ;
	while(n){
	  
	   n = n&(n-1); 
           count++ ;
           
	}

printf("num of ones in %o is %d \n",m,count);
return 0 ;
}
