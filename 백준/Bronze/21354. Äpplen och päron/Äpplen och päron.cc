#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(7*a > 13*b) printf("Axel");
    else if(7*a < 13*b) printf("Petra");
    else printf("lika");
}
