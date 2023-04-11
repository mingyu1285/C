#include <stdio.h>

void main(){
	int a,b;
	char c,d;
	printf("입력진수 결정 <1>10 <2>16 <3>8 :");
	scanf("%d",&a);

	printf("값 입력 :");
	scanf("%d",&b);

	c=a;
	d=b;	

	printf("%c의 10진수 ==> %d \n",d,d);
	printf("%c의 16진수 ==> %d \n",d,d);
	printf("%c의 8진수 ==> %d \n",d,d);
}
