#include <stdio.h>

int main(){
    double arr[6];
    double avg = 0.0;

    for(int i = 0; i < 6; i++){
        scanf("%lf", &arr[i]);
        avg += arr[i];
    }
    printf("%.1f", avg / 6.0);

    return 0;
}
