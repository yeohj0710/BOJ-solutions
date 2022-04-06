#include <cstdio>
#include <vector>
using namespace std;

vector<int> Tree;

void updateTree(int Node, int Begin, int End, int Index) {
    if(Index < Begin || Index > End) return;
    if(Begin == End) {
        Tree[Node] = 1;
        return;
    }
    int Mid = (Begin + End)/2;
    updateTree(Node*2, Begin, Mid, Index);
    updateTree(Node*2+1, Mid+1, End, Index);
    Tree[Node] = Tree[Node*2] + Tree[Node*2+1];
}

int countLarge(int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin + End)/2;
    return countLarge(Node*2, Begin, Mid, Left, Right) + countLarge(Node*2+1, Mid+1, End, Left, Right);
}

int main() {
    int N, Value;
    long long Count = 0;
    scanf("%d", &N);
    Tree.resize(N*4);
    for(int i=0; i<N; i++) {
        scanf("%d", &Value);
        Count += (long long)countLarge(1, 1, N, Value+1, N);
        updateTree(1, 1, N, Value);
    }
    printf("%lld", Count);
}
