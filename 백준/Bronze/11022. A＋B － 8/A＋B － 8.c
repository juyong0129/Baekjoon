#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[100], b[100];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], a[i] + b[i]);
    }

    return 0;
}
