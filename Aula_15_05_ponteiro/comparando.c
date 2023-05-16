#include <stdio.h>

int main(){

    int num, x, y, temp;    

    printf("Informe o numero de elementos no array: ");
    scanf("%d", &num);    

    int arr[num];

    printf("Informe o valor de cada array: ");
    for(x = 0; x < num; x++){
        scanf("%d", &arr[x]);
    }

    for(x = 0; x < num; x++){       

        for(y = 0; y < num - 1; y++){          

            if(arr[y] > arr[y + 1]){               

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }

    printf("Array depois de implementar o metodo bubble sort: ");

    for(x = 0; x < num; x++){

        printf("%d  ", arr[x]);

    }

    return 0;

}