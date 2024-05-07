#include<stdio.h>

typedef struct{		//definito a livello globale
	int n;
	int d;
	}frac_t;
	
frac_t add (frac_t, frac_t);

int main(){
	frac_t f1; f2, sum;
	scanf("%d %d", &f1.n, &f1.d);
	scanf("%d %d", &f2.n, &f2.d);
	sum= add(f1,f2);
	
	printf("%d/%d", sum.n, sum.d);
return 0;
}
frac_t add (frac_t a, frac_t b){
	frac_t r;
	r.d = a.d * b.d;
	r.n= a.n * b.d + d.n * a.d;
return r;
}
