#include <stdio.h>

int main()
{
    int tmp[3];
    int* p_tmp = tmp;
    int result[10] = {0};
    scanf("%d", p_tmp);
    scanf("%d", p_tmp + 1);
    scanf("%d", p_tmp + 2);
    int n = *p_tmp * *(p_tmp + 1) * *(p_tmp + 2);
    int digit;
    while (n > 0) {
        int digit = n % 10;
        result[digit]++;
        n /= 10;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}