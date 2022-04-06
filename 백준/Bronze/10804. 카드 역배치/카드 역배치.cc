#include <stdio.h>

int main() {
    int card[25], a, b, temp[25];
    for(int i=1; i<=20; i++) card[i] = i;
    for(int i=0; i<10; i++) {
        scanf("%d %d", &a, &b);
        for(int j=a; j<=b; j++) temp[j] = card[j];
        for(int j=a; j<=b; j++) card[j] = temp[a+b-j];
    }
    for(int i=1; i<=20; i++) printf("%d ", card[i]);
}
