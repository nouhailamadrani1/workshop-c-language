#include<stdio.h>



int main(){
char nom , prenom , sexe , numero_tele;
int age ;


//Nom, pr�nom , Age , Sexe et num�ro de t�l�phone.
   printf("entre votre nom :");
 scanf("%s",&nom);
 printf("entre votre prenom :");
  scanf("%s",&prenom);
 printf("entre votre sexe :");
    scanf("%s",&sexe);
    printf("entre votre age :");
    scanf("%s",&age);
      printf("entre votre numero telephone :");
    scanf("%s",&numero_tele);
    printf("nom = %s , prenom = %s , sexe =%s ,numero_tele =%d" ,nom , prenom , sexe , numero_tele );
    return 0;
}

