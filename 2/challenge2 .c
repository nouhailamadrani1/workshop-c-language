#include<stdio.h>

int main()
{
char voyelle;
    printf("entrez un caractére : ");
    scanf("%c",&voyelle);
    switch(voyelle){
    case 'a': printf("vous avez entre le voyelle a");
    break;
    case 'o': printf("vous avez entre le voyelle o");
    break;
    case 'u': printf("vous avez entre le voyelle u");
    break;
    case 'i': printf("vous avez entre le voyelle i");
    break;
    case 'e': printf("vous avez entre le voyelle e");
    break;
    case 'y': printf("vous avez entre le voyelle y");
    break;
     case 'A': printf("vous avez entre le voyelle A");
    break;
    case 'O': printf("vous avez entre le voyelle O");
    break;
    case 'U': printf("vous avez entre le voyelle U");
    break;
    case 'I': printf("vous avez entre le voyelle I");
    break;
    case 'E': printf("vous avez entre le voyelle E");
    break;
    case 'Y': printf("vous avez entre le voyelle Y");
    break;
    default: printf("c'est une consonne ");
    break;
    }
    
    return 0;
}
