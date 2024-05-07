//Definire un tipo di dato struct per rappresentare una data di nascita in termini di giorno, mese e anno (interi). 
//Scrivere un programma che chiede all'utente due date di nascita, 
//verifica che siano valide e determina quale delle due è più recente.

//Il programma deve utilizzare i seguenti sottoprogrammi:
//- input: inizializza una data di nascita da standard input (non sono necessari i controlli sulla validità della data)
//- confronto: determina quale delle due date è più recente e restituisce 1 (prima data), 2 (seconda data), 0 (sono equivalenti)

//10 3 2020 23 4 2023     2

#include <stdio.h>
typedef struct{
	int g;
	int m;
	int a;
}data;

data input();

int confronto(data,data);

int main(){
	data data1;
	data data2;
	int esito;
	
	data1=input();
	data2=input();
	esito=confronto(data1,data2);
	printf("%d",esito);

    return 0;
}

data input(){
    data n;
    scanf("%d %d %d", &n.g, &n.m, &n.a);
    return n;
}

//int confronto(data data1, data data2){
//    if (data1.a = data2.a){
//        if (data1.m = data2.m){
//            if (data1.g = data2.g){
//                return 0;
//            }else if(data1.g > data2.g){
//                return 1;
//            }else{
//                return 2;
//            }
//        }else if(data1.m > data2.m){
//            return 1;
//        }else{
//            return 2;
//        }
//    }else if(data1.a > data2.a){
//        return 1;
//    }else{
//        return 2;
//    }  
//}

int confronto(data data1, data data2){
    if(data1.a > data2.a){
        return 1;
    }
    if(data1.a < data2.a){
        return 2;
    }

    if(data1.a = data2.a){
        if( data1.m > data2.m){
            return 1;
    }
        else{
            return 2;
            }
        if( data1.g > data2.g ){
            return 1;
        }

        else{
            return 2;
    }

    }
}    

