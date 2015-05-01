#include<stdio.h>
#include<pthread.h>
#include<math.h>

#define nthreads 2

typedef struct{
	int** master;
	int tamanho;
	int line;
	int minimo;
	int maximo;
} parametros;

void* iteracao(void* teste){
	int i, j, x,contador=0,contador2=0,**mat2,**mat,tam,linha,imin,imax;
	parametros* outro = (parametros*)teste;
	mat=outro->master;
	tam=outro->tamanho;
	linha=outro->line;
	imin=outro->minimo;
	imax=outro->maximo;
	x = tam;
	mat2 = (malloc( x * sizeof(int)));
    for (j = 0; j < x; j++){
        mat2[j] = (malloc(x * sizeof(int)));
    }
    for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			mat2[i][j]=mat[i][j];	
		}
	}
	for(i = imin; i < imax; i++){
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
    	pthread_exit(mat2);
}

main(){
    int i,j,x, **matriz, temp1,temp2,temp3,iteracoes=10000,i2,minimo,maximo,imin,imax,resto=0;
    float tamlinha;
    FILE * fp;
    parametros teste;
    parametros teste2;
    pthread_t t1;
    pthread_t t2;
    x = 10;
    tamlinha=x/nthreads;
    resto = x%nthreads;
    minimo=tamlinha;
    
    printf("minimo : %d \n",minimo);
    maximo=tamlinha+resto;
    printf("maximo : %d \n",maximo);
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
    teste.master=matriz;
    teste.tamanho=x;
    teste.line=1;
    teste.minimo=0;
    teste.maximo=maximo;
    teste2.master=matriz;
    teste2.tamanho=x;
    teste2.line=1;
    teste2.minimo=maximo+1;
    teste2.maximo=minimo+maximo;
    for(i2=0;i2<iteracoes;i2++){
	pthread_create (&t1,NULL,iteracao,(void *) &teste);
	pthread_create (&t2,NULL,iteracao,(void *) &teste2);
	pthread_join(t1,(void **) &teste.master);
	pthread_join(t2,(void **) &teste2.master);
	for(i=0;i<maximo;i++){
		for(j=0;j<x;j++){
			matriz[i][j]=teste.master[i][j];
		}
	}
	for(i=maximo+1;i<maximo+minimo;i++){
		for(j=0;j<x;j++){
			matriz[i][j]=teste2.master[i][j];
		}
	}
	teste.master=matriz;
	teste2.master=matriz;
	for(i = 0; i < x; i++){
        printf("\n");
        for(j = 0; j < x; j++){
            printf("%d ", teste.master[i][j]);
        }
    }
}
}



