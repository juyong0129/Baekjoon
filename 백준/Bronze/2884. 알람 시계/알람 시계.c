#include <stdio.h>

int main() {
    int h, m, tmp;
    scanf("%d %d", &h, &m);
    tmp = m + (60 * h);
    
    tmp -= 45;
    if (tmp < 0)
        tmp += 1440;
    
    h = tmp / 60;
    m = tmp % 60;
    
    printf("%d %d", h, m);
    
    return 0;
}
