#include<stdio.h>

int main()
{
int nbr; 

    printf("entrez un nombre :");
    scanf("%d",&nbr);
    if(nbr<0)
    printf("negatif ");
    else if(nbr>0)
    printf("positif ");
    else 
    printf("null ");
    return 0;
}
