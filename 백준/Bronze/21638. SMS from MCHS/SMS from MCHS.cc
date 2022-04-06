#include <cstdio>
using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(c < 0 && d >=10) printf("A storm warning for tomorrow! Be careful and stay home if possible!");
    else if(c < a) printf("MCHS warns! Low temperature is expected tomorrow.");
    else if(d > b) printf("MCHS warns! Strong wind is expected tomorrow.");
    else printf("No message");
}
