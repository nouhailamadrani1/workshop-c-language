
#include<stdio.h>
int main()
{
int nbr , i ,p;
    int estpremeir =0 ;
    printf("entre  un nombre : ");
    scanf ("%d",&nbr);
   
for(p=2;p<nbr;p++)
{
estpremeir =0;

for(i=2;i<p;i++)
{
if(p%i==0)
{
estpremeir=1;
}
}

if(estpremeir==0) printf("%d\n",p);
}


return 0;
}

