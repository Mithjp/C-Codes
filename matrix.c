#include<stdio.h>
int main(){
int a,b,m[100][100],i,j;
printf("enter number of rows");
scanf("%d",&a);
printf("enter number of columns");
scanf("%d",&b);
for(i=0;i<a;i++)
for(j=0;j<b;j++){

printf("Enter Element at position %d%d ",i+1,j+1);
scanf("%d",&m[i][j]);

}
for(i=0;i<a;i++){

for(j=0;j<b;j++){
printf(" %d ",m[i][j]);

}
printf("\n");

}
return 0;
}
