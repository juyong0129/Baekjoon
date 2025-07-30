#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    char n[count];
    
    getchar();
    fgets(n, count + 1, stdin);
    
    int sum = 0;
    
    for(int i = 0; i < count; i++) {
        sum += n[i] - '0';
    }
    
    printf("%d", sum);

    return 0;
}