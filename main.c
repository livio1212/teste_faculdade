#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float t[3];
    int i;
    float soma, media;

    soma=0;
    for(i=0;i<=2;i++){

        printf("digite a temperatura %d", i);
        scanf("%f",&t[i]);
        soma=soma+t[i];

    }
    media=soma/3;
    printf("Media das temperaturas %10.2f", media);
        for(i=0;i<=2;i++)
            printf("diferenca %d e %10,2f", i, media-t[i],i);
}
