#include<stdio.h>
int main(){
	int nl;
	int i,j;
	int es;
	int et=1;
	
	printf("entrez nombre de lignes:");
	scanf("%d",&nl);
	es= nl-1;
	for(i=0;i<nl;i++){
		
	for(j=0;j<es;j++) printf(" ");
	for(j=0;j<et;j++) printf("*");
	printf("\n");
	es--;
	et+=2;
	
	
	}
}

