	#include<stdio.h>
	int main(){
		
		int nbr,multiplication,i;
		printf("entrez un nombre :");
		scanf("%d",&nbr);
		for(i=1; i<=10;i++){
			multiplication=i*nbr;
			printf(" %d*%d=%d\n",i,nbr,multiplication);
			
		}
	}
