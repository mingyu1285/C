#include <stdio.h>

void main(){
	int a,c;
	char b=' ';

	printf("수식을 한 줄로 띄어쓰기로 입력하세요:");
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
			printf("연산자를 잘못입력했습니다.");
	}
	
} 


