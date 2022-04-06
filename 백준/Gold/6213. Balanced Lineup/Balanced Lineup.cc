#include <cstdio>
#include <vector>
#include <algorithm>
#define INF 1000001
using namespace std;

vector<int> Min, Max;

void updateTree(int Node, int Begin, int End, int Index, int Value) {
    if(Index < Begin || Index > End) return;
    if(Begin == End) {
        Min[Node] = Max[Node] = Value;
        return;
    }
    int Mid = (Begin + End)/2;
    updateTree(Node*2, Begin, Mid, Index, Value);
    updateTree(Node*2+1, Mid+1, End, Index, Value);
    Min[Node] = min(Min[Node*2], Min[Node*2+1]);
    Max[Node] = max(Max[Node*2], Max[Node*2+1]);
}

int findMin(int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return INF;
    if(Left <= Begin && Right >= End) return Min[Node];
    int Mid = (Begin + End)/2;
    return min(findMin(Node*2, Begin, Mid, Left, Right), findMin(Node*2+1, Mid+1, End, Left, Right));
}

int findMax(int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Max[Node];
    int Mid = (Begin + End)/2;
    return max(findMax(Node*2, Begin, Mid, Left, Right), findMax(Node*2+1, Mid+1, End, Left, Right));
}

int main() {
    int N, Q, H, Left, Right;
    scanf("%d %d", &N, &Q);
    Min.resize(N*4+1), Max.resize(N*4+1);
    for(int i=1; i<=N; i++) {
        scanf("%d", &H);
        updateTree(1, 1, N, i, H);
    }
    for(int i=0; i<Q; i++) {
        scanf("%d %d", &Left, &Right);
        printf("%d\n", findMax(1, 1, N, Left, Right)-findMin(1, 1, N, Left, Right));
    }
}
