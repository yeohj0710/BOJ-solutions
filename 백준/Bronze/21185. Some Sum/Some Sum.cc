#include <cstdio>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    if(N%4 == 0) printf("Even");
    else if(N%4 == 2) printf("Odd");
    else printf("Either");
}
