#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], sum1 = 0, sum2 = 0, lastwin = 0;
    for(int i=0; i<10; i++) scanf("%d", &a[i]);
    for(int i=0; i<10; i++) scanf("%d", &b[i]);
    for(int i=0; i<10; i++) {
        if(a[i] > b[i]) sum1 += 3, lastwin = 1;
        else if(a[i] < b[i]) sum2 += 3, lastwin = 2;
        else sum1++, sum2++;
    }
    printf("%d %d\n", sum1, sum2);
    if(sum1 > sum2) printf("A");
    else if(sum1 < sum2) printf("B");
    else {
        if(lastwin == 1) printf("A");
        else if(lastwin == 2) printf("B");
        else printf("D");
    }
}
