#include<stdio.h>
#denfine N 10
int divisori(int)
int main(){
	int a[N];
	int i;
	int count;
	int max=-1;
	int=val;
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<N; i++){
		count=divisori(a[i]);
		if(count>max){
			max=count;
			val=a[i];
		}
	}
	printf("%d", val);
	for(i=0; i<N; i++){
		primo=divisori(a[i]);
		if(primo!=1){
			count++;
			for(d=2; flag=0, d<a[i]&&!flag; d++){
				a[i]=d;
				flag=1;
			}
		}
	}
	for(i=0; i<N; i++){
		ptintf("%3d", a[i]);
	}
return 0;		
}
int divisori(int){
	int d, count=0;
	for(d=1; d<num; d++){
		if(num%d==0){
			count++;
		}	
	}
}
