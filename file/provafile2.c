#include<stdio.h>

int main(){
	FILE *fi;
	char car;
	
	fi=fopen("testo.txt","r");

	
	if(fi!=NULL){
		fscanf(fi,"%c",&car);
		//car=fgetc(fi);
		while(!feof(fi)){
			//while(car!=EOF)
				printf("%c",car);
				fscanf(fi,"%c",&car);
			}
	
		fclose(fi);
	}
	else printf("Errore nel file");

}