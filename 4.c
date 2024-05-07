/*chiede un valore che rappresenta una temperatura in gradi celsius, converte il valore in gradi Fahrenheit
*/
#include <stdio.h>
int main(){

	int gradi_C;
	float gradi_F;
	
	printf("temperatura in gradi Celsius: ");
	scanf("%d",&gradi_C);
	gradi_F = gradi_C * 1.8 + 32;
	printf("la temperatura in gradi Fahrenheit è %f",gradi_F);

return 0;
}
