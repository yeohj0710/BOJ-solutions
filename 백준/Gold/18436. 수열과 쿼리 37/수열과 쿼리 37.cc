#include <cstdio>
#include <vector>
using namespace std;

vector<int> Odd, Even;

int updateOdd(int Node, int Begin, int End, int Index, int Value) {
    if(Index < Begin || Index > End) return Odd[Node];
    if(Begin == End) {
        if(Value%2) return Odd[Node] = 1;
        else return Odd[Node] = 0;
    }
    int Mid = (Begin+End)/2;
    int leftCnt = updateOdd(Node*2, Begin, Mid, Index, Value);
    int rightCnt = updateOdd(Node*2+1, Mid+1, End, Index, Value);
    return Odd[Node] = leftCnt+rightCnt;
}

int updateEven(int Node, int Begin, int End, int Index, int Value) {
    if(Index < Begin || Index > End) return Even[Node];
    if(Begin == End) {
        if(Value%2) return Even[Node] = 0;
        else return Even[Node] = 1;
    }
    int Mid = (Begin+End)/2;
    int leftCnt = updateEven(Node*2, Begin, Mid, Index, Value);
    int rightCnt = updateEven(Node*2+1, Mid+1, End, Index, Value);
    return Even[Node] = leftCnt+rightCnt;
}

int cntNum(int Node, int Begin, int End, int Left, int Right, bool isOdd) {
    if(Left > End || Right < Begin) return 0;
    if(Left <= Begin && Right >= End) {
        if(isOdd) return Odd[Node];
        else return Even[Node];
    }
    int Mid = (Begin+End)/2;
    int leftCnt = cntNum(Node*2, Begin, Mid, Left, Right, isOdd);
    int rightCnt = cntNum(Node*2+1, Mid+1, End, Left, Right, isOdd);
    return leftCnt+rightCnt;
}

int main() {
    int N, M, Val, Q, Index, Left, Right;
    scanf("%d", &N);
    Odd.resize(N*4+1), Even.resize(N*4+1);
    for(int i=1; i<=N; i++) {
        scanf("%d", &Val);
        updateOdd(1, 1, N, i, Val);
        updateEven(1, 1, N, i, Val);
    }
    scanf("%d", &M);
    for(int i=0; i<M; i++) {
        scanf("%d", &Q);
        if(Q == 1) {
            scanf("%d %d", &Index, &Val);
            updateOdd(1, 1, N, Index, Val);
            updateEven(1, 1, N, Index, Val);
        }
        else if(Q == 2 || Q == 3) {
            scanf("%d %d", &Left, &Right);
            if(Q == 2) printf("%d\n", cntNum(1, 1, N, Left, Right, 0));
            else if(Q == 3) printf("%d\n", cntNum(1, 1, N, Left, Right, 1));
        }
    }
}
