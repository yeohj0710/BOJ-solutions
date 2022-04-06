#include <stdio.h>

int main() {
    int input, check[50] = {0, };
    for(int i=1; i<=28; i++) {
        scanf("%d", &input);
        check[input]++;
    }
    for(int i=1; i<=30; i++)
        if(!check[i]) printf("%d\n", i);
}
