#include <cstdio>
using namespace std;

int Arr[1001][1001] = {};

int main() {
    int N, a, b, check = 0;
    scanf("%d %d %d", &N, &a, &b);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) scanf("%d", &Arr[i][j]);
    for(int i=1; i<=N; i++)
        if(Arr[i][b] > Arr[a][b]) check = 1;
    for(int j=1; j<=N; j++)
        if(Arr[a][j] > Arr[a][b]) check = 1;
    if(check) printf("ANGRY");
    else printf("HAPPY");
}
