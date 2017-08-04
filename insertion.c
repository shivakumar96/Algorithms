/* insertion sort */



#include<stdio.h>

int main(){

	int i , j , a[100] , temp , v ,n;

	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	for(i = 0;i<n;i++)
	   scanf("%d",&a[i]);

//-------------------sorting---------------------

	for(i=1;i<n;i++){
	    j = i -1 ;
            v= a[i] ;
	    while(j>=0 && v<a[j]){
		a[j+1] = a[j] ;
		j--;
		}
	   a[j+1] = v ;
	}

//--------------------------------------------------

	printf("the sorted array elements are :\n");
	for(i = 0;i<n;i++)
	   printf("%d ",a[i]);


  return 0 ;
}
