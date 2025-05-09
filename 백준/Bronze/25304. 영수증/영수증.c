#include <stdio.h>

int main()
{
    int input_sum, sum = 0, total_n, price, n;
    scanf("%d\n%d", &input_sum, &total_n);
    for(int i=1; i<=total_n; i++) {
        scanf("%d %d", &price, &n);
        sum += price * n;
    }
    
    if(sum == input_sum) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}