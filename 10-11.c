#include <stdio.h>

void gugu(int dan){
	for(int i=1; i<=9; i++){
		printf("%d X %d = %d \n",dan,i,dan*i);
	}
}


void main(){

	int a;
	printf("출력하고 싶은 단을 입력 : \n");
	scanf("%d",&a);

	gugu(a);



}

