#include <stdio.h>
#define N 30
void acq(int voti[], int length);
float media(int voti[], int length);

int main(){
    int voti[N];
    float sum;
    
    acq(voti, N);
    
/*    for(int i=0; i<N; i++){
        printf("%d ", voti[i]);
    }*/
    
    sum = media(int voti[], int length);
    
    printf = ("%.2f", sum);
    
return 0;    
}

void acq(int voti[], int length){
    int i;
    
    for(i=0; i<length; i++){
        scanf("%d", &voti[i]);
    }
    
}

float media(int voti[], int length){
    int count=0;
    int sum=0;
    
    for(i=0; i<length; i++){
        if(voti[i]!=0){
            count++;
        }
    }
    
    if(count!=0){
        for(i=0; i<length-1; i++){
            sum += voti[i];
        }
        
        sum /= count;
        
        return sum;
    }else{
        return 0;
    }    
    
}

