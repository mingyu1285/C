#include <stdio.h>

void main(){
	for(int i = 1; i<=9; i++){
		for(int k=2; k<=9; k++){
			printf("%2d * %2d = %2d ",k,i,k*i);
		}
		printf("\n");
	}
}
