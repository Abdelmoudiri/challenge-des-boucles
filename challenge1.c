#include<stdio.h>
#include<stdlib.h>

int main(){
    int nmbr,i;
    printf("entrer un nombre");
    scanf("%d",&nmbr);
    for(i=1;i<10;i++)
    {
        printf("%d * %d = %d\n ",nmbr,i,nmbr*i);
    }

}
