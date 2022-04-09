#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<int, vector<int>, greater<int>> pQueue;
    for(int i=0; i<N; i++) {
        int value; cin >> value;
        pQueue.push(value);
    }

    int ans = 0;
    while(true) {
        int a = pQueue.top();
        pQueue.pop();

        if(pQueue.empty()) break;

        int b = pQueue.top();
        pQueue.pop();

        pQueue.push(a+b);
        ans += a+b;
    }

    cout << ans;
}
