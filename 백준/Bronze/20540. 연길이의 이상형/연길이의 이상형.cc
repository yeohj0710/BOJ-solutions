#include <cstdio>
using namespace std;

int main() {
    char a, b, c, d;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    getchar();
    if(a == 'E') printf("I");
    else printf("E");
    if(b == 'S') printf("N");
    else printf("S");
    if(c == 'T') printf("F");
    else printf("T");
    if(d == 'J') printf("P");
    else printf("J");
}
