/* data una misura in gradi, stampare il corrispondente angolo in radianti
*/

#include <stdio.h>
#define PIGRECO 3.14

int main(){
	int gradi;
	float rad;
	printf("Dammi un angolo in gradi: ");
	scanf("%d",&gradi);
	rad=gradi*PIGRECO/180;
	
	printf("Vuoi convertire %d. In radianti risulta %.2f",gradi,rad);
	return 0;
}
