#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 10

int main(){
    int mat[M][N];
    int n = 0;
    srand(time(NULL));
    for(int i = 0; i < M; i++){
	for(int j = 0; j < N; j++){
	    mat[j][i] = n;
	    n++;
	}
    }
    for(int i = 0; i < N; i++){
	for(int j = 0; j < M; j++){
	    if(mat[i][j] >= 10)
		printf("%d|", mat[i][j]);
	    else
		printf(" %d|", mat[i][j]);
	}
	printf("\n");
    }
    return 0;
}
