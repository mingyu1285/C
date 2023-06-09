#include <stdio.h>
#include <malloc.h>

void main()
{
	int *p;
	int i, hap = 0;
	int cnt = 0;

	printf("입력할 정수는 몇 개인가요? : \n");
	scanf("%d",&cnt);

	p = (int *) malloc(sizeof(int) * cnt);

	for(i = 0; i<cnt; i++){
		printf("%d 번째 숫자 ", i+1);
		scanf("%d", p+i);

		if(p[i] % 2 == 0){
			hap= hap+p[i];
		}
	}

	printf("입력 숫자의 짝수의 합 ==> %d\n", hap);

	free(p);
}

