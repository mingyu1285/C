#include <stdio.h>
void main(){
	int a,b;
	int result;

	printf("첫 번째 정수를 넣어주세요 :");
	scanf("%d", &a);

	printf("두 번째 정수를 넣어주세요 :");
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %d ", a, b, result);
}
