#include <cstdio>
#include <vector>
#define MAX 1000000
using namespace std;

vector<int> Tree;

void updateTree(int Node, int Begin, int End, int Index, int Diff) {
    if(Index < Begin || Index > End) return;
    Tree[Node] += Diff;
    if(Begin < End) {
        int Mid = (Begin + End)/2;
        updateTree(Node*2, Begin, Mid, Index, Diff);
        updateTree(Node*2+1, Mid+1, End, Index, Diff);
    }
}

int findNum(int Node, int Begin, int End, int Ranking) {
    if(Begin == End) return Begin;
    int Mid = (Begin + End)/2;
    if(Ranking <= Tree[Node*2]) return findNum(Node*2, Begin, Mid, Ranking);
    else return findNum(Node*2+1, Mid+1, End, Ranking-Tree[Node*2]);
}

int main() {
    int N, Q, Ranking, Index, Diff;
    scanf("%d", &N);
    Tree.resize(4*MAX+1);
    for(int i=0; i<N; i++) {
        scanf("%d", &Q);
        if(Q == 1) {
            scanf("%d", &Ranking);
            Index = findNum(1, 1, MAX, Ranking);
            printf("%d\n", Index);
            updateTree(1, 1, MAX, Index, -1);
        }
        else {
            scanf("%d %d", &Index, &Diff);
            updateTree(1, 1, MAX, Index, Diff);
        }
    }
}
