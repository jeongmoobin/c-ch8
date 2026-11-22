#include <stdio.h>

int main(){
    int arr[10];
    int sum1 = 0;
    int sum2 = 0;
    double avg = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        if((i+1) % 2 == 0){
            sum1 += arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }
    avg = (double)sum2 / 5.0;

    printf("sum : %d\n", sum1);
    printf("avg : %.1f\n", avg);

    return 0;
}
