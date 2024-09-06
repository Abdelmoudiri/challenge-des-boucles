#include<stdio.h>
#include<stdlib.h>

int main() {
 int i, j,nbr,cmpt=0;
 printf("entrer un nombre ");
 scanf("%d",&nbr);

     for (i=1;i<=nbr;i++) {
     if(nbr%i==0)
     {
         cmpt++;
     }
     }
     if(cmpt==2){
         printf("le nombre est premier ");
     }
     else{ printf("le nombre pas premier");
}

    return 0;
}
