#include<stdio.h>

int main(){
	FILE *fo;
	int num;
	
	fo=fopen("numeri.txt","w");
	/* con w viene creato il file se non esiste,
	altrimenti viene sovrascritto
	r -> leggere un file, se non esiste errore
	a -> si scrive alla fine del file */
	
	if(fo!=NULL){
		scanf("%d",&num);
		while(num!=0){
			fprintf(fo,"%d\n",num);
			scanf("%d",&num);
			}	
	
		fclose(fo);
	}
	else printf("Errore nel file");
	
	fo=fopen("numeri.txt","r");
	if(fo!=NULL){
		fscanf(fo,"%d",&num);
		while(!feof(fo)){
			printf("%d",num);
			fscanf(fo,"%d",&num);
		}
		
		fclose(fo);
		
	}
	else printf("File non esistente");

}