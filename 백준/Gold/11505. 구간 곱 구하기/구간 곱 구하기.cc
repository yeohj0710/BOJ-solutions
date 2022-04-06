#include <cstdio>
#include <vector>
#define MODULER 1000000007
using namespace std;

vector<long long> Arr, Tree;

long long initTree(int Begin, int End, int Node) {
    if(Begin == End) return Tree[Node] = Arr[Begin];
    int Mid = (Begin+End)/2;
    long long leftKey = initTree(Begin, Mid, Node*2);
    long long rightKey = initTree(Mid+1, End, Node*2+1);
    return Tree[Node] = (leftKey * rightKey) % MODULER;
}

long long updateTree(int Begin, int End, int Node, int Index, int Value) {
    if(Index > End || Index < Begin) return Tree[Node];
    if(Begin == End) return Tree[Node] = Value;
    int Mid = (Begin+End)/2;
    long long leftKey = updateTree(Begin, Mid, Node*2, Index, Value);
    long long rightKey = updateTree(Mid+1, End, Node*2+1, Index, Value);
    return Tree[Node] = (leftKey * rightKey) % MODULER;
}

long long calcAns(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return 1;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    long long leftKey = calcAns(Begin, Mid, Node*2, Left, Right);
    long long rightKey = calcAns(Mid+1, End, Node*2+1, Left, Right);
    return (leftKey * rightKey) % MODULER;
}

int main() {
    int N, M, K, a, b, c;
    scanf("%d %d %d", &N, &M, &K);
    Arr.resize(N);
    for(int i=0; i<N; i++) scanf("%lld", &Arr[i]);
    Tree.resize(N*4);
    initTree(0, N-1, 1);
    for(int i=0; i<M+K; i++) {
        scanf("%d", &a);
        if(a == 1) {
            scanf("%d %d", &b, &c);
            updateTree(0, N-1, 1, b-1, c);
        }
        else {
            scanf("%d %d", &b, &c);
            printf("%lld\n", calcAns(0, N-1, 1, b-1, c-1));
        }
    }
}
