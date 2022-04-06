#include <cstdio>
using namespace std;

int main() {
    int K, D, A;
    scanf("%d/%d/%d", &K, &D, &A);
    if(K+A<D || !D) printf("hasu");
    else printf("gosu");
}
