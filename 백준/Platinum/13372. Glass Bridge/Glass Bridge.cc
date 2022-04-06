#include <cstdio>
#include <vector>
using namespace std;

void updateTree(vector<long long> &Tree, int Node, int Begin, int End, int Index) {
    if(Index < Begin || Index > End) return;
    if(Begin == End) {
        Tree[Node] = 1;
        return;
    }
    int Mid = (Begin + End)/2;
    updateTree(Tree, Node*2, Begin, Mid, Index);
    updateTree(Tree, Node*2+1, Mid+1, End, Index);
    Tree[Node] = Tree[Node*2] + Tree[Node*2+1];
}

long long cntBigger(vector<long long> &Tree, int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin + End)/2;
    return cntBigger(Tree, Node*2, Begin, Mid, Left, Right) + cntBigger(Tree, Node*2+1, Mid+1, End, Left, Right);
}

int main() {
    int T, N, Value;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        long long Sum = 0;
        vector<long long> Tree;
        scanf("%d", &N);
        Tree.resize((N+1)*4);
        for(int i=1; i<=N; i++) {
            scanf("%d", &Value);
            Sum += cntBigger(Tree, 1, 1, N, Value+1, N);
            updateTree(Tree, 1, 1, N, Value);
        }
        printf("%lld\n", Sum);
    }
}
