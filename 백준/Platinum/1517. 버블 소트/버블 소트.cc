#include <cstdio>
#include <vector>
#include <algorithm>
#define INF 1000000001
using namespace std;

vector<pair<int, int>> Data; // first : value, second : index
vector<int> Tree;

void updateTree(int Node, int Begin, int End, int Index) {
    if(Begin == End) {
        Tree[Node] = 1;
        return;
    }
    int Mid = (Begin+End)/2;
    if(Index <= Mid) updateTree(Node*2, Begin, Mid, Index);
    else updateTree(Node*2+1, Mid+1, End, Index);
    Tree[Node] = Tree[Node*2] + Tree[Node*2+1];
}

int cntLess(int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    int leftCnt = cntLess(Node*2, Begin, Mid, Left, Right);
    int rightCnt = cntLess(Node*2+1, Mid+1, End, Left, Right);
    return leftCnt + rightCnt;
}

int main() {
    int N, Value;
    long long Ans = 0;
    scanf("%d", &N);
    Tree.resize(N*4+1);
    Data.push_back({-INF, 0});
    for(int i=1; i<=N; i++) {
        scanf("%d", &Value);
        Data.push_back({Value, i});
    }
    sort(Data.begin(), Data.end());
    for(int i=1; i<=N; i++) {
        Ans += (long long)cntLess(1, 1, N, Data[i].second+1, N);
        updateTree(1, 1, N, Data[i].second);
    }
    printf("%lld", Ans);
}
