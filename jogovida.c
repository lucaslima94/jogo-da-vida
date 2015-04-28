#include<stdio.h>

main(){
    int y,i,j,x, **matriz, temp1,temp2,temp3;
    FILE * fp;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d %d \n", x, y);

	fp=fopen("entrada.txt","r");
	if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    matriz = (malloc( x * sizeof(int)));
    for (j = 0; j < x; j++){
        matriz[j] = (malloc(y * sizeof(int)));
    }

    //Zerando matriz inicial
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            matriz[i][j] = 0;
        }
    }
    while(!feof(fp)){
        fscanf(fp, "%d", &temp1);
        fscanf(fp, "%d", &temp2);
        fscanf(fp, "%d", &temp3);
        matriz[temp1-1][temp2-1] = temp3;
        printf("teste %d %d %d teste\n", temp1, temp2, temp3);
    }
    fclose(fp);
    // Testar a matriz
    for(i = 0; i < x; i++){
        printf("\n");
        for(j = 0; j < y; j++){
            printf("%d ", matriz[i][j]);
        }
    }
}


