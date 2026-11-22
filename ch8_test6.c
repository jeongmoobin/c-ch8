#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int input;
    int mul_count = 0;
    int sum = 0;

    while (count < 100) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        arr[count] = input;
        count++;
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            mul_count++;
            sum += arr[i];
        }
    }

    printf("Multiples of 5 : %d\n", mul_count);
    printf("sum : %d\n", sum);
    
    if (mul_count > 0) {
        printf("avg : %.1f\n", (double)sum / mul_count);
    } else {
        printf("avg : 0.0\n");
    }

    return 0;
}
