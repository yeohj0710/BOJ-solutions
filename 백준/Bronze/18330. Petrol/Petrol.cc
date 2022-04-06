#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a <= b+60) printf("%d", 1500*a);
    else printf("%d", 1500*(b+60)+3000*(a-b-60));
}
