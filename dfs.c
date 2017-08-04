/* depth first search  */

#include<stdio.h>
#include<stdlib.h>
#define MAX 25
int n ,  graph[MAX][MAX] , visited[MAX], stack[MAX];
char NODE[MAX] ;
void DFSSearch();
void dfs() ;
void setNotVisited();

void setNotVisited(){
int i ;
for(int i =0 ;i<n; i++){
   visited[i] = 0 ;
}
return ;
}


void DFSSearch(){
int i ;
  setNotVisited();
  for(i=0;i<n;i++){
    if(!visited[i])
    {
      dfs(i);

    }
  }

}

void dfs(int indx){
 int i ;
 visited[indx] = 1 ;
  for(i=0;i<n;i++){
     if(graph[indx][i] && !visited[i])
    {
      dfs(i);


    }
  }

   printf("%d \n",indx) ;

}



int main(){

int i, j  ;
printf("enter the graph size\n");
scanf("%d",&n);
printf("enter the graph \n adjacent matrix :\n");

for(i=0;i<n;i++)
 for(j=0;j<n;j++)
    scanf("%d",&graph[i][j]) ;

printf("\n\n the graph is : \n");

for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
      printf("%d ",graph[i][j]) ;
     printf("\n");
    }

DFSSearch();




return 0 ;
}
-
