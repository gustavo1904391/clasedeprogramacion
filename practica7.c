#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR 1904391*/
int main(int argc, char *argv[]) {
	int b,n,i,z=0;
	printf("INGRESE EL NUMERO BASE A MULTIPLICAR: ");
	scanf("%d",&b);
	printf("\nINGRESE LA CANTIDAD DE MULTIPLOS QUE DESEA VER EN PANTALLA: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		z=b*i;
		printf("\n%2d * %2d = %2d",b,i,z);
	}
	
	
	int x,j=2,y,k=1;
	char cont='t';
	
	do{
	
	printf("\ningresa el valor deseado positivo: ");
	scanf("%d",&x);
}while(x<0 && x>100);
	int ar[x];
	for(j=0;j<x;j++){
		printf("\ningrese el numero del arreglo: ");
		scanf("%d",&ar[j]);
	}
	printf("\n el numero %d es primo",ar[0]);
		printf("\n el numero %d es primo",ar[1]);
	
	for(j=3;j<x;j++){
	cont='f';
	while(cont=='f'){
		y=ar[j]%k;
		if(y=0){
			cont='t';
		}
		k++;
	}	
	if(cont=='f'){
		printf("\n numero %d es primo",ar[j]);
	}else if(cont=='t'){
		printf("\n numero %d no es primo",ar[j]);
	}
}

	

	
	return 0;
}
