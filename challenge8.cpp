#include<stdio.h>



int main(){
	int a ,b , c ,d , Somme , Moyenne;

	
 printf("entre le numbre a :");
 scanf("%d",&a);
 
 printf("entre le numbre b :");
 scanf("%d",&b);
 
 printf("entre le numbre c :");
 scanf("%d",&c);
  printf("entre le numbre d :");
 scanf("%d",&d);

 Somme = (a+b+c+d);
 Moyenne =Somme/4;
  printf("la somme de a+b+c+d: %d ",Somme );
   printf("moyenne : %d",Moyenne);
	
return 0;
	}
