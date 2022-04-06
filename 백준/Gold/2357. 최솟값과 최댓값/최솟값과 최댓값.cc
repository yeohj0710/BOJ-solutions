#include <cstdio>
#include <cmath>
#include <vector>
#define INF 1000000001
using namespace std;

vector<int> Arr;
vector<pair<int, int>> Tree; // first : min, second : max

int initTreeMin(int Begin, int End, int Node) {
    if(Begin == End) return Tree[Node].first = Arr[Begin];
    int Mid = (Begin+End)/2;
    return Tree[Node].first = min(initTreeMin(Begin, Mid, Node*2), initTreeMin(Mid+1, End, Node*2+1));
}

int initTreeMax(int Begin, int End, int Node) {
    if(Begin == End) return Tree[Node].second = Arr[Begin];
    int Mid = (Begin+End)/2;
    return Tree[Node].second = max(initTreeMax(Begin, Mid, Node*2), initTreeMax(Mid+1, End, Node*2+1));
}

int findMin(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return INF;
    if(Left <= Begin && Right >= End) return Tree[Node].first;
    int Mid = (Begin+End)/2;
    return min(findMin(Begin, Mid, Node*2, Left, Right), findMin(Mid+1, End, Node*2+1, Left, Right));
}

int findMax(int Begin, int End, int Node, int Left, int Right) {
    if(Left > End || Right < Begin) return -INF;
    if(Left <= Begin && Right >= End) return Tree[Node].second;
    int Mid = (Begin+End)/2;
    return max(findMax(Begin, Mid, Node*2, Left, Right), findMax(Mid+1, End, Node*2+1, Left, Right));
}

int main() {
    int N, M, data, a, b;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) {
        scanf("%d", &data);
        Arr.push_back(data);
    }
    Tree.resize(N*4);
    initTreeMin(0, N-1, 1);
    initTreeMax(0, N-1, 1);
    for(int i=0; i<M; i++) {
        scanf("%d %d", &a, &b);
        printf("%d %d\n", findMin(0, N-1, 1, a-1, b-1), findMax(0, N-1, 1, a-1, b-1));
    }
}
