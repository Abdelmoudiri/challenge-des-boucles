#include<stdlib.h>
#include<stdio.h>

int main()
{
    int i, j,nbr,cmpt=0;
 printf("entrer un nombre ");
 scanf("%d",&nbr);
 for(i=0;i<=nbr;i++)
 {
     cmpt=cmpt+i;
 }
 printf("la somme est : %d ",cmpt);
    return 0;
}
