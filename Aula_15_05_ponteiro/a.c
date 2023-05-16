#include <stdio.h>

int main(){

    int valores[5]={9,1,5,6,2};
    int i,j;

    printf("valores[i]:%d",valores[0]);


    for(i=0;i<5;i++){
        for(j=i+1;i<5;j++){

            if(valores[j] > valores[i]){
                valores[i] = valores[j];
            }
            else{
                
            }
        }
        printf("valores[i]:%d",valores[i]);
    }


    return 0;
}