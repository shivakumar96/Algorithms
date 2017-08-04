/* merger sort */

#include<stdio.h>

void merge(int a1[] , int n1, int a2[], int n2, int a[] );
void megereSort(int[],int n);


void merge(int a1[] ,int n1, int a2[], int n2, int a[] ){

	int i =0 , j = 0, k = 0 ;
        while(i<n1&&j<n2) {
	   if(a1[i]<a2[j]){
		a[k] = a1[i] ;
		k++; i++;
	    }
	   else{
		a[k] = a2[j] ;
		k++; j++;
	   }
	}
        if(i==n1){
	   while(j<n2){
	     a[k] = a2[j] ;
	     j++; k++;
	   }
	}
	else{
	   while(i<n1){
	     a[k] = a1[i] ;
	     i++; k++;
	   }
	}

}


void megereSort(int a[] , int n){

	int l = n/2 ,b[100] ,l1, c[100],l2 , i ;
	if(n>1){
	l1 = n/2 ;
        l2 = n - l1 ;
	for(i = 0 ;i<l1;i++)
            b[i] = a[i] ;	

	for(i = l1 ;i<n;i++)
            c[i-l1] = a[i] ;

        megereSort(b,l1);
	megereSort(c,l2) ;

	merge(b,l1,c,l2,a);
	}
	

}


int main(){

	int a[100] , i , n ;

	printf("Enter n : ");
	scanf("%d",&n);
	printf("enter array elemets\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);


	megereSort(a,n);

	printf("sorted elememts\n");
	for(i=0;i<n;i++)
	   printf("%d ",a[i]);

        printf("\n");


return 0 ;
}
