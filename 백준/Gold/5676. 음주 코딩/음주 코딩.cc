#include <cstdio>
#include <vector>
using namespace std;

int updateTree(vector<int> &Tree, int Node, int Begin, int End, int Index, int Value) {
    if(Index < Begin || Index > End) return Tree[Node];
    if(Begin == End) return Tree[Node] = Value;
    int Mid = (Begin+End)/2;
    int leftVal = updateTree(Tree, Node*2, Begin, Mid, Index, Value);
    int rightVal = updateTree(Tree, Node*2+1, Mid+1, End, Index, Value);
    return Tree[Node] = leftVal * rightVal;
}

int calcMul(vector<int> &Tree, int Node, int Begin, int End, int Left, int Right) {
    if(Left > End || Right < Begin) return 1;
    if(Left <= Begin && Right >= End) return Tree[Node];
    int Mid = (Begin+End)/2;
    int leftVal = calcMul(Tree, Node*2, Begin, Mid, Left, Right);
    int rightVal = calcMul(Tree, Node*2+1, Mid+1, End, Left, Right);
    return leftVal*rightVal;
}

int main() {
    int N, K, Index, Value, Left, Right, Mul;
    char Q;
    while(scanf("%d %d", &N, &K) != EOF) {
        vector<int> Tree;
        vector<pair<char, pair<int, int>>> Query;
        Tree.resize(4*N+1);
        for(int i=1; i<=N; i++) {
            scanf("%d", &Value);
            if(Value > 0) Value = 1;
            else if(Value < 0) Value = -1;
            updateTree(Tree, 1, 1, N, i, Value);
        }
        for(int i=0; i<K; i++) {
            char a; int b, c;
            scanf(" %c %d %d", &a, &b, &c);
            Query.push_back({a, {b, c}});
        }
        for(int i=0; i<K; i++) {
            Q = Query[i].first;
            if(Q == 'C') {
                Index = Query[i].second.first;
                Value = Query[i].second.second;
                if(Value > 0) Value = 1;
                else if(Value < 0) Value = -1;
                updateTree(Tree, 1, 1, N, Index, Value);
            }
            else if(Q == 'P') {
                Left = Query[i].second.first;
                Right = Query[i].second.second;
                Mul = calcMul(Tree, 1, 1, N, Left, Right);
                if(Mul > 0) printf("+");
                else if(Mul < 0) printf("-");
                else printf("0");
            }
        }
        printf("\n");
    }
}
