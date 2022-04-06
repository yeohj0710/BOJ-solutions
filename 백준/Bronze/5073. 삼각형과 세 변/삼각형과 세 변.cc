#include <cstdio>
using namespace std;

int main() {
    int a, b, c;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(!a && !b && !c) break;
        else if(a+b <= c || b+c <= a || c+a <= b) printf("Invalid\n");
        else if(a == b && b == c) printf("Equilateral\n");
        else if(a == b || b == c || c == a) printf("Isosceles\n");
        else printf("Scalene\n");
    }
}
