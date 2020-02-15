#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tipo,ch,precioph=10,x;
	float subt,neto,descuento;
	char nombre;
	printf("introduzca el nombre del cliente\n");
	scanf("%c",&nombre);
	printf("introduzca el tipo de cliente\n");
	scanf("%d",&tipo);
	switch(tipo){
	case 1:    printf("introduzca el numero de hojas\n");
		       scanf("%d",&ch);
		       subt=10*ch;
		       descuento=subt*0.95;
		       neto=descuento;
		       printf("nombre del cliente    %c\n",nombre);
		       printf("subtotal a pagar      %.02f\n",subt);
		       printf("descuento             .05\n");
		       printf("neto a pagar          %.02f\n",neto);break;
		       
	case 2:    printf("introduzca el numero de hojas\n");
		       scanf("%d",&ch);
		       subt=10*ch;
		       descuento=subt*0.92;
		       neto=descuento;
		       printf("nombre del cliente    %c\n",nombre);
		       printf("subtotal a pagar      %.02f\n",subt);
		       printf("descuento             .05\n");
		       printf("neto a pagar          %.02f\n",neto);break;	
		       
	case 3:    printf("introduzca el numero de hojas\n");
		       scanf("%d",&ch);
		       subt=10*ch;
		       descuento=subt*0.88;
		       neto=descuento;
		       printf("nombre del cliente    %c\n",nombre);
		       printf("subtotal a pagar      %.02f\n",subt);
		       printf("descuento             .05\n");
		       printf("neto a pagar          %.02f\n",neto);break;  
			       
	case 4:    printf("introduzca el numero de hojas\n");
		       scanf("%d",&ch);
		       subt=10*ch;
		       descuento=subt*0.;
		       neto=descuento;
		       printf("nombre del cliente    %c\n",nombre);
		       printf("subtotal a pagar      %.02f\n",subt);
		       printf("descuento             .05\n");
		       printf("neto a pagar          %.02f\n",neto);break;
	       }
			   		
	return 0;
}
