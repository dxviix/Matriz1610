#include <stdio.h>

int main()
{
	int MAT[3][4];
	int i,j;

	
	printf("Digite valores para preencher uma matriz 3x4\n\n");
	
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			scanf("%d", &MAT[i][j]);
		}
	}
	
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d - ", &MAT[i][j]);
		}
		printf("%d\n", &MAT[i][j]);
	}
	
	return 0;
}
