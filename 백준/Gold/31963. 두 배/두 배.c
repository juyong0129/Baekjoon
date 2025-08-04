#include <stdio.h>

int main() {
    int length, index = 0;
    scanf("%d", &length);
    int n[length];
    for(int i = 0; i  < length; i++) {
        scanf("%d", &n[i]);
    }
    
    for(int i = 0; i < length - 1; i++) {
        while(n[i] > n[i+1]) {
            n[i+1] *= 2;
            index ++;
        }
    }
    
    printf("%d", index);
}