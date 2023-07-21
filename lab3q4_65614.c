#include <stdio.h>
int main() {
    int n,sum,cnt = 0;
    while (1) {
        printf("Enter Number : ");
        scanf("%d" ,&n);
        if (n <= 0) {
            break;
        } 
        sum += n;
        cnt++;
    }
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",((float)sum/cnt));
    return 0;
}