#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> Arr, Tree;

void initTree(int Begin, int End, int Node) {
    if(Begin == End) {
        Tree[Node] = Begin;
        return;
    }
    int Mid = (Begin+End)/2;
    initTree(Begin, Mid, Node*2);
    initTree(Mid+1, End, Node*2+1);
    if(Arr[Tree[Node*2]] < Arr[Tree[Node*2+1]]) Tree[Node] = Tree[Node*2];
    else Tree[Node] = Tree[Node*2+1];
}

int findMinIdx(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return -1;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    int leftMinIdx = findMinIdx(Begin, Mid, Node*2, Left, Right);
    int rightMinIdx = findMinIdx(Mid+1, End, Node*2+1, Left, Right);
    if(leftMinIdx < 0) return rightMinIdx;
    if(rightMinIdx < 0) return leftMinIdx;
    if(Arr[leftMinIdx] < Arr[rightMinIdx]) return leftMinIdx;
    else return rightMinIdx;
}

long long maxArea(int Left, int Right) {
    int minIdx = findMinIdx(0, N-1, 1, Left, Right);
    long long Ans = (long long)(Right-Left+1)*(long long)Arr[minIdx];
    if(minIdx+1 <= Right) {
        long long Area = maxArea(minIdx+1, Right);
        if(Area > Ans) Ans = Area;
    }
    if(minIdx-1 >= Left) {
        long long Area = maxArea(Left, minIdx-1);
        if(Area > Ans) Ans = Area;
    }
    return Ans;
}

int main() {
    while(1) {
        scanf("%d", &N);
        if(!N) break;
        Arr.resize(N);
        for(int i=0; i<N; i++) scanf("%d", &Arr[i]);
        Tree.resize(N*4);
        initTree(0, N-1, 1);
        printf("%lld\n", maxArea(0, N-1));
    }
}
