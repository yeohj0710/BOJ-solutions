#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

void updateTree(vector<int> &Tree, int Node, int Begin, int End, int Index, int Var) {
    if(Index < Begin || Index > End) return;
    Tree[Node] += Var;
    if(Begin < End) {
        int Mid = (Begin + End)/2;
        updateTree(Tree, Node*2, Begin, Mid , Index, Var);
        updateTree(Tree, Node*2+1, Mid+1, End, Index, Var);
        Tree[Node] = Tree[Node*2] + Tree[Node*2+1];
    }
}

int calcSum(vector<int> &Tree, int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin + End)/2;
    return calcSum(Tree, Node*2, Begin, Mid, Left, Right) + calcSum(Tree, Node*2+1, Mid+1, End, Left, Right);
}

int main() {
    int T, N, M, DVDNum;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        vector<int> Tree, Pos;
        scanf("%d %d", &N, &M);
        Tree.resize((N+M)*4+1), Pos.resize(N+1);
        for(int j=1; j<=N; j++) {
            Pos[j] = M+j;
            updateTree(Tree, 1, 1, M+N, Pos[j], 1);
        }
        for(int j=1; j<=M; j++) {
            scanf("%d", &DVDNum);
            printf("%d ", calcSum(Tree, 1, 1, M+N, 1, Pos[DVDNum]-1));
            updateTree(Tree, 1, 1, M+N, Pos[DVDNum], -1);
            updateTree(Tree, 1, 1, M+N, M+1-j, 1);
            Pos[DVDNum] = M+1-j;
        }
        printf("\n");
    }
}
