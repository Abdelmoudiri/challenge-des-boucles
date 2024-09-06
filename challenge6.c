#include<stdlib.h>
#include<stdio.h>
int main(){
int i,nbr;


 printf("entrer un nombre ");
 scanf("%d",&nbr);


 for(i=1;i<=nbr;i++)
 {
     if(nbr%i==0){
            printf(" %d ",i);
     }
 }
}
