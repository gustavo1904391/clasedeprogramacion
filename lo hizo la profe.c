#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k=1,p=0;
	for(i=1;i<=10;i++){
		for(j=1+p;j<=5+p;j++){
			printf("%2d * %2d = %2d  ",j,i,i*j);
		}
		if(i==10 && k==1){
			i=k=0;
			p=5;
			printf("\n");
		}
		printf("\n");
	}
printf("\nLA PROFE LO HIZO YO NO PUDE  ;(");
	return 0;
}
