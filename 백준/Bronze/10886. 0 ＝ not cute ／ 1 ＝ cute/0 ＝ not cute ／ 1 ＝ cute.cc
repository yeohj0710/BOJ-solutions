#include<stdio.h>

int main() {
    int n, answer, count1 = 0, count2 = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &answer);
        if(answer) count1++;
        else count2++;
    }
    if(count1 > count2) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
}
