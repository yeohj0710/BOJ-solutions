#include<stdio.h>
#include<string.h>

int main() {
    int T, score, correct;
    char ox[100];
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        score = 0, correct = 0;
        scanf("%s", ox);
        for(int j=0; j<strlen(ox); j++) {
            if(ox[j] == 'O') score += ++correct;
            else correct = 0;
        }
        printf("%d\n", score);
    }
}
