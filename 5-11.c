#include <stdio.h>

void main(){
	int a,c;
	char b=' ';

	printf("������ �� �ٷ� ����� �Է��ϼ���:");
	scanf("%d",&a);
	scanf(" %c",&b);
	scanf("%d",&c);

	
	switch(b){
		case '+':
			printf("%d + %d = %d",a,c,a+c);
			break;
		case '-':
			printf("%d - %d = %d",a,c,a-c);
			break;
		case '*':
			printf("%d * %d = %d",a,c,a*c);
			break;
		case '/':
			printf("%d / %d = %d",a,c,a/c);
			break;
		case '%':
			printf("%d %% %d = %d",a,c,a%c);
			break;
		default :
			printf("�����ڸ� �߸��Է��߽��ϴ�.");
	}
	
} 


