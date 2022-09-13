#include<stdio.h>

int main(){
int i,n,U2, U0 ,U1;
do{

 printf("entrer un nombre :");
 scanf("%d",&n);
 }while(n<0);
 U0=1;
 U1=1;

 for(i=0; i<n ;i++){
 	U2=U0+U1;
 	printf(" U %d= %d\n",i,U0);
 	U0=U1;
 	U1=U2;
 	
 }
 return 0;
	
}
