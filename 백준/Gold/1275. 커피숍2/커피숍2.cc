#include <cstdio>
#include <vector>
using namespace std;

vector<int> Arr;
vector<long long> Tree;

long long initTree(int Begin, int End, int Node) {
    if(Begin == End) return Tree[Node] = Arr[Begin];
    int Mid = (Begin+End)/2;
    long long leftKey = initTree(Begin, Mid, Node*2);
    long long rightKey = initTree(Mid+1, End, Node*2+1);
    return Tree[Node] = leftKey + rightKey;
}

long long calcSum(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    long long LeftKey = calcSum(Begin, (Begin+End)/2, Node*2, Left, Right);
    long long RightKey = calcSum((Begin+End)/2+1, End, Node*2+1, Left, Right);
    return LeftKey + RightKey;
}

void updateTree(int Begin, int End, int Node, int Index, long long Diff) {
    if(Index < Begin || Index > End) return;
    Tree[Node] += Diff;
    int Mid = (Begin+End)/2;
    if(Begin < End) {
        updateTree(Begin, Mid, Node*2, Index, Diff);
        updateTree(Mid+1, End, Node*2+1, Index, Diff);
    }
}

int main() {
    int N, M, x, y, a, b;
    scanf("%d %d", &N, &M);
    Arr.resize(N);
    for(int i=0; i<N; i++) scanf("%d", &Arr[i]);
    Tree.resize(N*4);
    initTree(0, N-1, 1);
    for(int i=0; i<M; i++) {
        scanf("%d %d %d %d", &x, &y, &a, &b);
        if(x > y) { int temp = x; x = y; y = temp; }
        printf("%lld\n", calcSum(0, N-1, 1, x-1, y-1));
        long long Diff = (long long)b - (long long)Arr[a-1];
        Arr[a-1] = b;
        updateTree(0, N-1, 1, a-1, Diff);
    }
}
