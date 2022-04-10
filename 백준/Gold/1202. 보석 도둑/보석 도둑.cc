#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<pair<int, int>> jewel(N);
    for(int i=0; i<N; i++)
        cin >> jewel[i].first >> jewel[i].second;

    vector<int> bag(K);
    for(int i=0; i<K; i++) cin >> bag[i];

    sort(jewel.begin(), jewel.end());
    sort(bag.begin(), bag.end());

    long long ans = 0;
    int j = 0;
    priority_queue<int> pQueue;

    for(int i=0; i<K; i++) {
        while(j < N && jewel[j].first <= bag[i]) {
            pQueue.push(jewel[j].second);
            j++;
        }

        if(!pQueue.empty()) {
            ans += pQueue.top();
            pQueue.pop();
        }
    }

    cout << ans;
}
