#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

vector<long long> Arr;
vector<long long> SegmentTree;
vector<pair<int, pair<int, long long>>> Query;


long long CreateSegmentTree(int Begin, int End, int Node) {
    if(Begin == End) return SegmentTree[Node] = Arr[Begin];
    long long LeftKey = CreateSegmentTree(Begin, (Begin+End)/2, Node*2);
    long long RightKey = CreateSegmentTree((Begin+End)/2+1, End, Node*2+1);
    SegmentTree[Node] = LeftKey + RightKey;
    return SegmentTree[Node];
}

void UpdateSegmentTree(int Begin, int End, int Node, int Index, long long Diff) {
    if(Index < Begin || Index > End) return;
    SegmentTree[Node] += Diff;
    if(Begin < End) {
        UpdateSegmentTree(Begin, (Begin+End)/2, Node*2, Index, Diff);
        UpdateSegmentTree((Begin+End)/2+1, End, Node*2+1, Index, Diff);
    }
}

long long SumOfSegmentTree(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return SegmentTree[Node];
    long long LeftKey = SumOfSegmentTree(Begin, (Begin+End)/2, Node*2, Left, Right);
    long long RightKey = SumOfSegmentTree((Begin+End)/2+1, End, Node*2+1, Left, Right);
    return LeftKey + RightKey;
}

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    for(int i=0; i<N; i++) {
        long long data;
        scanf("%lld", &data);
        Arr.push_back(data);
    }
    for(int i=0; i<M+K; i++) {
        int a, b; long long c;
        scanf("%d %d %lld", &a, &b, &c);
        Query.push_back({a, {b, c}});
    }
    int TreeHeight = (int)ceil(log2(N));
    int TreeSize = (1 << (TreeHeight+1));
    SegmentTree.resize(TreeSize);
    CreateSegmentTree(0, N-1, 1);
    for(int i=0; i<Query.size(); i++) {
        if(Query[i].first == 1) {
            int Index = Query[i].second.first-1;
            long long Diff = Query[i].second.second - Arr[Index];
            Arr[Index] = Query[i].second.second;
            UpdateSegmentTree(0, N-1, 1, Index, Diff);
        }
        else printf("%lld\n", SumOfSegmentTree(0, N-1, 1, Query[i].second.first-1, Query[i].second.second-1));
    }
}
