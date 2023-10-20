#include<stdio.h>

main(){

    int vetor1[10], tamanho1 = 0, tamanho2 = 0, v2[tamanho1], v3[tamanho2];

       for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor1[i]);

    
        if(vetor1[i] % 2 == 0){
            tamanho1++;
            v2[i] = vetor1[i];
        } else {
            tamanho2++;
            v3[i] = vetor1[i];
        }

    }
    // int v2[tamanho1], v3[tamanho2];

    // for(int i = 0; i < 10; i++){
    //     for(int j = 0; j < tamanho1; j++){
    //         if(vetor1[i] % 2 == 0){
    //             v2[j] = vetor1[i];
    //         } else {
    //             v3[j] = vetor1[i];
    //         }
    //     }
    // }

    for (int i = 0; i < 10; i++) { 
    printf("\nV1: %d", vetor1[i]);
    }

    for (int i = 0; i < tamanho1; i++) { 
    printf("\nV2: %d", v2[i]);
    }

    for (int i = 0; i < tamanho2; i++) { 
    printf("\nV3: %d", v3[i]);
    }




}