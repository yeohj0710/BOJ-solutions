#include <cstdio>
#include <vector>
using namespace std;

vector<int> Arr;
vector<long long> Tree;

long long calcSum(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    long long LeftKey = calcSum(Begin, (Begin+End)/2, Node*2, Left, Right);
    long long RightKey = calcSum((Begin+End)/2+1, End, Node*2+1, Left, Right);
    return LeftKey + RightKey;
}

void updateTree(int Begin, int End, int Node, int Index, int Diff) {
    if(Index < Begin || Index > End) return;
    Tree[Node] += (long long)Diff;
    int Mid = (Begin+End)/2;
    if(Begin < End) {
        updateTree(Begin, Mid, Node*2, Index, Diff);
        updateTree(Mid+1, End, Node*2+1, Index, Diff);
    }
}

int main() {
    int N, M, a, b, c;
    scanf("%d %d", &N, &M);
    Arr.resize(N);
    Tree.resize(N*4);
    for(int i=0; i<M; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(!a) {
            if(b > c) { int temp = b; b = c; c = temp; }
            printf("%lld\n", calcSum(0, N-1, 1, b-1, c-1));
        }
        else {
            int Diff = c - Arr[b-1];
            Arr[b-1] = c;
            updateTree(0, N-1, 1, b-1, Diff);
        }
    }
}
