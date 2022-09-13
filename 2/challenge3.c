#include<stdio.h>

int main()
{
int nbr1 ,nbr2 ,somme,triple;
    printf("entrez nombre 1:\n");
    scanf("%d",&nbr1);
    printf("entrez nombre 2:\n");
    scanf("%d",&nbr2);
    if(nbr1==nbr2){
    triple=3*(nbr1+nbr2);
    printf("triple de leur somme :%d",triple);}
    else{
    somme=nbr1+nbr2;
    printf("la somme :%d",somme);}
    return 0;
}