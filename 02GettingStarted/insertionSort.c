//
#include <stdio.h>
#define MAX 100000
int main(void){
    int list[MAX];
    int size,i,j,key;
    scanf("%d",&size);
    for(i = 0; i < size; i++){
        scanf("%d",&list[i]);
    }
    for(i = 1; i < size; i++){
        key = list[i];
        j = i - 1;
        while(j >= 0 && list[j] > key){
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key;
    }
    for(i = 0; i < size; i++){
        printf("%d ", list[i]);
    }
}