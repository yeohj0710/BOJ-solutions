#include <cstdio>
using namespace std;

int main() {
    int N, M, a, b, check1 = 1, check2 = 1;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) {
        scanf("%d %d", &a, &b);
        if(a != b) check1 = 0;
    }
    for(int i=0; i<M; i++) {
        scanf("%d %d", &a, &b);
        if(a != b) check2 = 0;
    }
    if(check1 && check2) printf("Accepted");
    else if(!check1) printf("Wrong Answer");
    else if(check1 && !check2) printf("Why Wrong!!!");
}
