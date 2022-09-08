#include<stdio.h>
#include<math.h>


int main(){
	int xa ,ya ,xb ,yb , AB;
	

	
 printf("entre le numbre xa :");
 scanf("%d",&xa);
 
 printf("entre le numbre ya :");
 scanf("%d",&ya);
 
 printf("entre le numbre xb :");
 scanf("%d",&xb);
  printf("entre le numbre yb :");
 scanf("%d",&yb);

 AB=sqrt(pow((xb-xa),2) + pow((yb-ya),2));
 
  printf("distnce AB = %d ",AB );
  
	
return 0;
	}
