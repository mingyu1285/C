#include <stdio.h>

void main()
{
	int gugu[8][9];
	int dan = 2;
	int one = 1;

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 9; j++){
			gugu[i][j] = dan*one;
                        printf("%d X %d = %d \t",dan,one,gugu[i][j]);
			one++;
			if(one == 10){
				dan++;
			   	one=1;
				printf("\n");
			}
				
		
		
		}
	}
}
