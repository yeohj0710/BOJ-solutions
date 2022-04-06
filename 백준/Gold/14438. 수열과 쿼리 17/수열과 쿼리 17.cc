#include <cstdio>
#include <vector>
#include <algorithm>
#define INF 1000000001
using namespace std;

vector<int> Arr, Tree;

int initTree(int Begin, int End, int Node) {
    if(Begin == End) return Tree[Node] = Arr[Begin];
    int Mid = (Begin+End)/2;
    int leftMin = initTree(Begin, Mid, Node*2);
    int rightMin = initTree(Mid+1, End, Node*2+1);
    if(leftMin < rightMin) return Tree[Node] = leftMin;
    else return Tree[Node] = rightMin;
}

int updateTree(int Begin, int End, int Node, int Index) {
    if(Index < Begin || Index > End) return Tree[Node];
    if(Begin == End) return Tree[Node] = Arr[Index];
    int Mid = (Begin+End)/2;
    int leftMin = updateTree(Begin, Mid, Node*2, Index);
    int rightMin = updateTree(Mid+1, End, Node*2+1, Index);
    return Tree[Node] = min(leftMin, rightMin);
}

int findMin(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return INF;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    int leftMin = findMin(Begin, Mid, Node*2, Left, Right);
    int rightMin = findMin(Mid+1, End, Node*2+1, Left, Right);
    return min(leftMin, rightMin);
}

int main() {
    int N, M, Q, Index, Value, Left, Right;
    scanf("%d", &N);
    Arr.resize(N);
    for(int i=0; i<N; i++) scanf("%d", &Arr[i]);
    Tree.resize(N*4);
    initTree(0, N-1, 1);
    scanf("%d", &M);
    for(int i=0; i<M; i++) {
        scanf("%d", &Q);
        if(Q == 1) {
            scanf("%d %d", &Index, &Value);
            Arr[Index-1] = Value;
            updateTree(0, N-1, 1, Index-1);
        }
        else {
            scanf("%d %d", &Left, &Right);
            printf("%d\n", findMin(0, N-1, 1, Left-1, Right-1));
        }
    }
}
