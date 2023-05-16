#include <stdio.h>

void main(){
	int a, b;
	char ch;

	while(1){
		printf("계산할 두 수를 입력 (멈추려면 Ctrl+c) : ");
		scanf("%d %d",&a, &b);
		
		printf("계산할 연산자를 입력하세요 : ");
		scanf(" %c", &ch);

		switch(ch){
			case '+' :
				printf("%d + %d = %d 입니다. \n",a, b, a+b);
				break;
			case '-' :
				printf("%d - %d = %d 입니다. \n",a, b, a-b);
				break;
			case '*' :
				printf("%d * %d = %d 입니다. \n",a, b, a*b);
				break;
			case '/' :
				printf("%d / %d = %f 입니다. \n",a, b, a/(float)b);
				break;
			case '%' :
				printf("%d %% %d = %d 입니다. \n",a, b, a%b);
				break;
			default:
				printf("연산자를 잘못 입력했습니다.\n");
		}
	}
}

