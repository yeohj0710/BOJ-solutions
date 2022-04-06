#include<stdio.h>

int main() {
    int score[5], average = 0;
    for(int i=0; i<5; i++) {
        scanf("%d", &score[i]);
        if(score[i] < 40) score[i] = 40;
        average += score[i];
    }
    printf("%d", average/5);
}
