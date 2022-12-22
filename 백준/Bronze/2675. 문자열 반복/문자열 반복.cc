#include<stdio.h>
#include<string.h>

int main() {
    int T, R;
    char str[25];
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %s", &R, str);
        for(int j=0; j<strlen(str); j++)
            for(int k=0; k<R; k++) printf("%c", str[j]);
        printf("\n");
    }
}
