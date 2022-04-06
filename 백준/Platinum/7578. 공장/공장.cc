#include <cstdio>
#include <vector>
#define MAX 1000000
using namespace std;

vector<int> A, B;
vector<long long> Tree;

void updateTree(int Node, int Begin, int End, int Index) {
    if(Index < Begin || Index > End) return;
    Tree[Node]++;
    if(Begin < End) {
        int Mid = (Begin + End)/2;
        updateTree(Node*2, Begin, Mid, Index);
        updateTree(Node*2+1, Mid+1, End, Index);
    }
}

long long calcSum(int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin + End)/2;
    return calcSum(Node*2, Begin, Mid, Left, Right) + calcSum(Node*2+1, Mid+1, End, Left, Right);
}

int main() {
    int N, Value;
    long long Ans = 0;
    scanf("%d", &N);
    A.resize(N+1), B.resize(MAX+1), Tree.resize(N*4+1);
    for(int i=1; i<=N; i++) scanf("%d", &A[i]);
    for(int i=1; i<=N; i++) {
        scanf("%d", &Value);
        B[Value] = i;
    }
    for(int i=1; i<=N; i++) {
        Ans += calcSum(1, 1, N, B[A[i]]+1, N);
        updateTree(1, 1, N, B[A[i]]);
    }
    printf("%lld", Ans);
}
