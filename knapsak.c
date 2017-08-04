/* knapsak dynamic programmin algorithm */

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void setknap();
int max(int a , int b);
void pintKnapsak();
void SolveKnapsak();

int knapsak[MAX][MAX], value[MAX], weight[MAX] , n , W;

void setknap(){
   int i ;
   for(i = 0 ; i<=n ; i++) {
 		knapsak[i][0] = 0 ;
		
	}
    for(i = 0 ; i<=W ; i++) {
 		knapsak[0][W] = 0 ;
		
	}
 }

int max(int a , int b) {
	return (a<b)?b:a ;
 }

void pintKnapsak(){
   int i , j ;
   for(i=0; i<=n;i++){
	for(j=0;j<=W;j++){
		  printf("%d ",knapsak[i][j]);
		}
	  printf("\n");
	}
 }

void SolveKnapsak(){
   int i , j ; 
   setknap() ;

    for(i=1; i<=n;i++){
	for(j=1;j<=W;j++){
		   if((j-weight[i]) >=0 ){
			 knapsak[i][j] = max(knapsak[i-1][j],( value[i] + knapsak[i-1][j-weight[i]]));
			}
		   else
			knapsak[i][j] = knapsak[i-1][j] ;
		}
	}

    pintKnapsak();
 }

int main(){
   int i ;
   printf("Enter the number of items : ");
   scanf("%d",&n);
   printf("Enter the max weight of the bag : ");
   scanf("%d",&W);
   printf(" ENter the item it, weight and value : \n");
   for(i =1 ;i<=n;i++)
       scanf("%d%d",&weight[i],&value[i]);
   SolveKnapsak();
   return 0 ;
 }

