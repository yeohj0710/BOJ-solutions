#include <cstdio>
using namespace std;

int main() {
    int N, M, sum, a, b, check = 0, Max;
    scanf("%d %d", &N, &M);
    sum = M;
    Max = M;
    for(int i=0; i<N; i++) {
        scanf("%d %d", &a, &b);
        sum = sum+a-b;
        if(sum > Max) Max = sum;
        if(sum < 0) check = 1;
    }
    if(!check) printf("%d", Max);
    else printf("0");
}
