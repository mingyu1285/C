#include <stdio.h>

void main(){
	int a;
	printf("1~4 �߿� �������ּ���: ");
	scanf("%d",&a);

	switch(a){
		case 1:
			printf("1�� ������\n");
			break;
		case 2:
			printf("2�� ������\n");
			break;
		case 3:
			printf("3�� ������\n");
			break;
		case 4: 
			printf("4�� ������\n");
			break;
		default:
			printf("1~4������ �������ּ���\n");
	}
}
