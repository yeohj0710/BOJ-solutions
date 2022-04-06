#include <cstdio>
using namespace std;

int main() {
    int T, N, sum1, sum2;
    char c1, c2;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        sum1 = 0, sum2 = 0;
        scanf("%d", &N);
        for(int j=0; j<N; j++) {
            scanf(" %c %c", &c1, &c2);
            if(c1 == 'R' && c2 == 'P') sum2++;
            else if(c1 == 'P' && c2 == 'R') sum1++;
            else if(c1 == 'P' && c2 == 'S') sum2++;
            else if(c1 == 'S' && c2 == 'P') sum1++;
            else if(c1 == 'S' && c2 == 'R') sum2++;
            else if(c1 == 'R' && c2 == 'S') sum1++;
        }
        if(sum1 > sum2) printf("Player 1\n");
        else if(sum1 < sum2) printf("Player 2\n");
        else printf("TIE\n");
    }
}
