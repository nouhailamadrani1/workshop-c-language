#include <stdio.h>

int main(){
	float c , f ;
	
	printf("entre  la temperature en Fahrenheit  :");
	scanf("%f",&f);
	

c= (f- 32)/1,8;
printf(" la temperature en degre : %f C ",c);
 if(c<=0){
 printf("tres froid");
 }
 else if( c>0 && c<=25){
 printf("froid");	
 }
 else if(c>25 && c<=40){
printf("chaud");
 }	
 else {
 printf("tres chaud");
 }


return 0;
}
