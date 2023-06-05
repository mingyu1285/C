#include <stdio.h>

void main(){


	FILE *wfp;

	wfp = fopen("c:\\c_study\\gugu.txt","w");


	for(int i = 2; i<10; i++){
		fprintf(wfp,"#Á¦%d´Ü\t\t",i);
	}

	fprintf(wfp,"\n");

	for(int i =1; i<10; i++){
		for(int k =2; k<10; k++){
			fprintf(wfp,"%d X %d = %d \t", k,i,k*i);
		}
		fprintf(wfp,"\n");
	}
        
	

	fclose(wfp);
}
