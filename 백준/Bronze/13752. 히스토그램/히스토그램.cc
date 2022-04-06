#include <stdio.h>

int main() {
    int n, digit;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &digit);
        for(int j=0; j<digit; j++) printf("=");
        printf("\n");
    }
}
