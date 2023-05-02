#include <stdio.h>

void main(){
	int a;
	printf("1~4 중에 선택해주세요: ");
	scanf("%d",&a);

	switch(a){
		case 1:
			printf("1을 선택함\n");
			break;
		case 2:
			printf("2를 선택함\n");
			break;
		case 3:
			printf("3을 선택함\n");
			break;
		case 4: 
			printf("4를 선택함\n");
			break;
		default:
			printf("1~4까지만 선택해주세요\n");
	}
}
