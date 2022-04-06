#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<int, vector<int>, greater<>> pQueue;

    for(int i=0; i<N*N; i++) {
        int value; cin >> value;

        if(pQueue.size() < N) pQueue.push(value);
        else if(value > pQueue.top()) {
            pQueue.pop();
            pQueue.push(value);
        }
    }

    cout << pQueue.top();
}
