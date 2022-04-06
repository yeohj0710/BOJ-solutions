#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pQueue;
    while(N--) {
        int x; cin >> x;
        if(x != 0) pQueue.push({abs(x), x});
        else {
            if(!pQueue.empty()) {
                cout << pQueue.top().second << "\n";
                pQueue.pop();
            }
            else cout << "0\n";
        }
    }
}
