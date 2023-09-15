#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int table[100];
    int nbr,i,max;
    int somme = 0;
    printf("combient des nombre vous voullez entre ? ");
    scanf("%d",&nbr);
    for(i = 0 ; i<nbr;i++){
        printf("N(%d) = ",i+1);
        scanf("%d",&table[i]);
    }
    for(i = 0 ; i<nbr;i++){
        if(table[i]%10 == 0 && table[i] < 100 ){
            somme = somme + table[i];
        }
    }
    max = table[0];
    for(i = 1 ; i<nbr;i++){
        if(table[i]%10 == 0 && table[i] < 100 ){
            if(max < table[i]){
            max = table[i];
        }
        }
       
    }
    printf("la somme des nombre qui se termine par 0  est : %d\n",somme);
    printf("le max des nombre  est : %d\n",max);
}
