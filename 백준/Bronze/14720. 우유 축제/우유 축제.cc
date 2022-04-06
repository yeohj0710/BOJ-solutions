#include <cstdio>
using namespace std;

int main() {
    int N, Type, cnt = 0, cur = -1;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &Type);
        if((cnt == 0 && Type == 0)||(cur == 0 && Type == 1)||(cur == 1 && Type == 2)
           ||(cur == 2 && Type == 0)) cur = Type, cnt++;
    }
    printf("%d", cnt);
}
