#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int max = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(i == 0 || arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d\n", max);

    return 0;
}