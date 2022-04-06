#include <cstdio>
#include <vector>
using namespace std;

vector<long long> Tree;

void updateTree(int Node, int Begin, int End, int Index, int Diff) {
    if(Index < Begin || Index > End) return;
    Tree[Node] += (long long)Diff;
    if(Begin < End) {
        int Mid = (Begin+End)/2;
        updateTree(Node*2, Begin, Mid, Index, Diff);
        updateTree(Node*2+1, Mid+1, End, Index, Diff);
    }
}

long long calcSum(int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    long long leftSum = calcSum(Node*2, Begin, Mid, Left, Right);
    long long rightSum = calcSum(Node*2+1, Mid+1, End, Left, Right);
    return leftSum + rightSum;
}

int main() {
    int N, M, Q, Index, Diff, Left, Right;
    scanf("%d %d", &N, &M);
    Tree.resize(4*N+1);
    for(int i=0; i<M; i++) {
        scanf("%d", &Q);
        if(Q == 1) {
            scanf("%d %d", &Index, &Diff);
            updateTree(1, 1, N, Index, Diff);
        }
        else {
            scanf("%d %d", &Left, &Right);
            printf("%lld\n", calcSum(1, 1, N, Left, Right));
        }
    }
}
