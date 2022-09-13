# include <stdio.h>
# include <stdlib.h>

int main (){
    int i, n;
    printf("entrez un nombre:");
scanf("%d",&n);


for (i=2;i<=n;i++){
if (i!=n){
if(n%i==0) {printf("not prime"); break;
}
else {printf("prime"); break;
}
}

}
}
