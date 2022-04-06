#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    if(a1-a2 >= 2 && b1-b2 >= 2) printf("1");
    else printf("0");
}
