#include<stdio.h>

main(){
<<<<<<< HEAD
	int i,j,contador=0,mat[10][10],mat2[10][10],contador2=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			mat[i][j]=rand()%3;
=======
	int i,j,contador=0,mat[10][10],mat2[10][10];
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			mat[i][j]=rand()%2;
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			mat2[i][j]=mat[i][j];
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
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
<<<<<<< HEAD
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			else{
			if(i==0 && j==9){
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i+1][j]==1){
					contador=contador+1;
				}
<<<<<<< HEAD
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i+1][j]==2){
					contador2=contador2+1;
				}
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			else{
			if(i==0 && (j>0 && j<9)){
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
<<<<<<< HEAD
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
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			else{
			if(i==9 && j==0){
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
				if(mat[i-1][j+1]==1){
					contador=contador+1;
				}
				if(mat[i][j+1]==1){
					contador=contador+1;
				}
<<<<<<< HEAD
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j+1]==2){
					contador2=contador2+1;
				}
				if(mat[i][j+1]==2){
					contador2=contador2+1;
				}
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			else{
			if(i==9 && j==9){
				if(mat[i][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j-1]==1){
					contador=contador+1;
				}
				if(mat[i-1][j]==1){
					contador=contador+1;
				}
<<<<<<< HEAD
				if(mat[i][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j-1]==2){
					contador2=contador2+1;
				}
				if(mat[i-1][j]==2){
					contador2=contador2+1;
				}
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			else{
			if(i==9 && (j>0 && j<9)){
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
<<<<<<< HEAD
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
			if(j==0 && (i>0 && i<9)){
=======
			}
			else{
			if(j==0 && (i>0 && j<9)){
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
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
<<<<<<< HEAD
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
			if(j==9 && (i>0 && i<9)){
=======
			}
			else{
			if(j==9 && (i>0 && j<9)){
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
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
<<<<<<< HEAD
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
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			else{
			if((i>0 && i<9) && (j>0 && j<9)){
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
<<<<<<< HEAD
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
=======
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
				}
				}
				}
				}
				}
				}
				}
				}
				}
<<<<<<< HEAD
				}
			printf("%d ",contador2);
			
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
=======
			printf("%d ",contador);
			if(mat[i][j]==1){
				if(contador>3){
					mat2[i][j]=0;
				}
				if(contador<2){
					mat2[i][j]=0;
				}
				if(contador==2 || contador==3){
					mat2[i][j]=mat[i][j];
				}
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			}
			if(mat[i][j]==0){
				if(contador==3){
					mat2[i][j]=1;
				}
			}
<<<<<<< HEAD
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
=======
			contador=0;
>>>>>>> 794fde893b034fce1c70f1e6801dce7e8b66d142
			
		}
		
	}
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
}


