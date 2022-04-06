#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Arr, Tree;

int initTree(int Begin, int End, int Node) {
    if(Begin == End) return Tree[Node] = Begin;
    int Mid = (Begin+End)/2;
    int leftMinIdx = initTree(Begin, Mid, Node*2);
    int rightMinIdx = initTree(Mid+1, End, Node*2+1);
    if(Arr[leftMinIdx] < Arr[rightMinIdx]) return Tree[Node] = leftMinIdx;
    else if(Arr[leftMinIdx] > Arr[rightMinIdx]) return Tree[Node] = rightMinIdx;
    else return Tree[Node] = min(leftMinIdx, rightMinIdx);
}

int updateTree(int Begin, int End, int Node, int Index) {
    if(Index < Begin || Index > End || Begin == End) return Tree[Node];
    int Mid = (Begin+End)/2;
    int leftMinIdx = updateTree(Begin, Mid, Node*2, Index);
    int rightMinIdx = updateTree(Mid+1, End, Node*2+1, Index);
    if(Arr[leftMinIdx] < Arr[rightMinIdx]) return Tree[Node] = leftMinIdx;
    else if(Arr[leftMinIdx] > Arr[rightMinIdx]) return Tree[Node] = rightMinIdx;
    else return Tree[Node] = min(leftMinIdx, rightMinIdx);
}

int main() {
    int N, M, Q, Index, Value;
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
        else printf("%d\n", Tree[1]+1);
    }
}
