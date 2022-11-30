#include <bits/stdc++.h>
using namespace std;

int degree[100005] = {0, };
vector<int> node[100005];
priority_queue<int, vector<int>, greater<int>> Queue;

int main() {
    int N, M, A, B, pop;
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        cin >> A >> B;
        node[A].push_back(B);
        degree[B]++;
    }
    for(int i=1; i<=N; i++)
        if(!degree[i]) Queue.push(i);
    while(!Queue.empty()) {
        pop = Queue.top();
        Queue.pop();
        cout << pop << "\n";
        for(int i=0; i<node[pop].size(); i++) {
            degree[node[pop][i]]--;
            if(!degree[node[pop][i]]) Queue.push(node[pop][i]);
        }
    }
}
