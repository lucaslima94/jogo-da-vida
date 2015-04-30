#include<stdio.h>

int** iteracao(int** mat, int tam, int linha){
	int i, j, x,contador=0,contador2=0,**mat2;
	x = tam;
	mat2 = (malloc( x * sizeof(int)));
    for (j = 0; j < x; j++){
        mat2[j] = (malloc(x * sizeof(int)));
    }
    printf("\n \n \n");
    for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			mat2[i][j]=mat[i][j];	
		}
	}
	for(i = 0; i < x; i++){
       		printf("\n");
       		for(j = 0; j < x; j++){
            	if(i==0 && j==0){
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(i==0 && j==(x-1)){
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(i==0 && (j>0 && j<(x-1))){
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j+1]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(i==(x-1) && j==0){
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(i==(x-1) && j==(x-1)){
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(i==(x-1) && (j>0 && j<(x-1))){
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(j==0 && (i>0 && i<(x-1))){
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
				if(mat[i+1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j+1]==2){
					contador2=contador2+1;
				}
			}
			else{
			if(j==(x-1) && (i>0 && i<(x-1))){
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
			}
			else{
			if((i>0 && i<(x-1)) && (j>0 && j<(x-1))){
				if(mat[i-1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j+1]==2){
					contador2=contador2+1;
				}
				}
				}
				}
				}
				}
				}
				}
				}
				}
			
			if(mat[i][j]==1){
				if(contador2==1){
					mat2[i][j]=2;
				}
				else{
				if(contador==8){
					mat2[i][j]=2;
				}
				else{
				if(contador>3){
					mat2[i][j]=0;
				}
				else{
				if(contador<2){
					mat2[i][j]=0;
				}
				else{
				if(contador==2 || contador==3){
					mat2[i][j]=mat[i][j];
				}
				}
				}
				}
				}
			}
			if(mat[i][j]==0){
				if(contador==3){
					mat2[i][j]=1;
				}
			}
			if(mat[i][j]==2){
				if(contador==0){
					mat2[i][j]=0;
				}
				else{
				if(contador>0){
					mat2[i][j]=2;
				}
				}
			}
			contador=0;
			contador2=0;
        	}
    	}
    	return mat2;
}

main(){
    int i,j,x, **matriz, temp1,temp2,temp3,iteracoes=10,i2;
    FILE * fp;
    x = 10;
    printf("%d %d \n", x, x);

	fp=fopen("entrada.txt","r");
	if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    matriz = (malloc( x * sizeof(int)));
    for (j = 0; j < x; j++){
        matriz[j] = (malloc(x * sizeof(int)));
    }

    //Zerando matriz inicial
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            matriz[i][j] = 0;
        }
    }
    while(!feof(fp)){
        fscanf(fp, "%d", &temp1);
        fscanf(fp, "%d", &temp2);
        fscanf(fp, "%d", &temp3);
        matriz[temp1-1][temp2-1] = temp3;
        printf("L: %d C: %d Celula: %d\n", temp1, temp2, temp3);
    }
    fclose(fp);
    // Testar a matriz
    for(i = 0; i < x; i++){
        printf("\n");
        for(j = 0; j < x; j++){
            printf("%d ", matriz[i][j]);
        }
    }
    for(i2=0;i2<iteracoes;i2++){
	matriz=iteracao(matriz, x, 1);
	for(i = 0; i < x; i++){
        printf("\n");
        for(j = 0; j < x; j++){
            printf("%d ", matriz[i][j]);
        }
    }
}
}



