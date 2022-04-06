#include <cstdio>
using namespace std;

int main() {
    int i = 1, n0, n1, n2, n3, n4;
    while(1) {
        scanf("%d", &n0);
        if(!n0) break;
        printf("%d. ", i);
        n1 = 3*n0;
        if(n1%2) printf("odd "), n2 = (n1+1)/2;
        else printf("even "), n2 = n1/2;
        n3 = 3*n2;
        n4 = n3/9;
        printf("%d\n", n4);
        i++;
    }
}
