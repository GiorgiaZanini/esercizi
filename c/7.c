/*Scrivere un programma in C che richiede all’utente di inserire i coefficienti a, b, c di un polinomio di secondo grado ax2 + bx + c = 0. 
Se a è pari a zero, il programma informa che il polinomio è di grado inferiore al secondo. 
In caso contrario, il programma calcola il determinante (det) dell’equazione di secondo grado e informa l’utente se le soluzioni sono reali e distinte (det>0), coincidenti (det=0) o complesse coniugate (det<0)*/

#include <stdio.h>
#include <math.h>
int main(){
	
	float a; 
	float b;
	float c;
	
	printf("in base al polinomio ax^2 + bx + c = 0, scrivi i valori a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	
	/*b^2 -4ac*/
	
	if(a==0){
	printf("\n il polinomio è di grado inferiore\n");
	}
	
	else if("((pow(%f,2) -4*%d*%f)>0",b,a,c){
	printf("\n le soluzioni sono reali e distinte\n");
	}
	
	else if("(pow(%f,2) -4*%f*%f)==0",b,a,c){
	printf("\n le soluzioni sono reali e coincidenti\n");
	}
	
	else{
	printf("\n le soluzioni sono complesse coniugate\n");
	}
		
	
return 0;
}
