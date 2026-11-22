#include <stdio.h>

int main(){
    int arr[10];
    int odd = 0;
    int even = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    printf("odd : %d\n", arr[0] + arr[2] + arr[4] + arr[6] + arr[8]);
    printf("even : %d", arr[1] + arr[3] + arr[5] + arr[7] + arr[9]);

    return 0;
}
