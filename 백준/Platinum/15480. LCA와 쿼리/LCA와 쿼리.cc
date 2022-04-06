#include <cstdio>
#include <vector>
#define MAX 100001
using namespace std;

int Parent[MAX][20], Depth[MAX], H = 0;
vector<int> Line[MAX];

void findParent(int Par, int Node, int Dep) {
    if(!Line[Node].size()) return;
    Parent[Node][0] = Par;
    Depth[Node] = Dep;
    for(int i=0; i<Line[Node].size(); i++)
        if(Line[Node][i] != Par) findParent(Node, Line[Node][i], Dep+1);
}

int findLCA(int A, int B) {
    if(Depth[A] != Depth[B]) {
        if(Depth[A] < Depth[B]) swap(A, B);
        int Diff = Depth[A] - Depth[B];
        for(int i=0; Diff>0; i++) {
            if(Diff%2) A = Parent[A][i];
            Diff >>= 1;
        }
    }
    if(A != B) {
        for(int i=H; i>=0; i--)
            if(Parent[A][i] != 0 && Parent[A][i] != Parent[B][i]) {
                A = Parent[A][i];
                B = Parent[B][i];
            }
        A = Parent[A][0];
    }
    return A;
}

int main() {
    int N, M, A, B, r, u, v;
    int temp, r_temp, u_temp, v_temp, maxNode;
    scanf("%d", &N);
    temp = N;
    while(temp > 1) {
        temp /= 2;
        H++;
    }
    for(int i=0; i<N-1; i++) {
        scanf("%d %d", &A, &B);
        Line[A].push_back(B);
        Line[B].push_back(A);
    }
    findParent(0, 1, 0);
    for(int i=1; i<=H; i++)
        for(int j=2; j<=N; j++)
            if(Parent[j][i-1]) Parent[j][i] = Parent[Parent[j][i-1]][i-1];
    scanf("%d", &M);
    for(int i=0; i<M; i++) {
        scanf("%d %d %d", &r, &u, &v);
        u_temp = u, v_temp = v;
        int uvLCA = findLCA(u_temp, v_temp);
        u_temp = u, r_temp = r;
        int urLCA = findLCA(u_temp, r_temp);
        v_temp = v, r_temp = r;
        int vrLCA = findLCA(v_temp, r_temp);
        maxNode = Depth[uvLCA]>Depth[urLCA]?uvLCA:urLCA;
        maxNode = Depth[maxNode]>Depth[vrLCA]?maxNode:vrLCA;
        printf("%d\n", maxNode);
    }
}
