#include <stdio.h>

void main(){
	
	for(int s=2; s<=9; s++){
		printf("  #Á¦%d´Ü#  ",s);
	}
	printf("\n\n");
			
	for(int i=1; i<=9; i++){
		for(int k=2; k<=9; k++){
			printf("%2dX %2d = %2d",k,i,k*i);
		}
		printf("\n");
	}
}	

