#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> time(N);
    for(int i=0; i<N; i++)
        cin >> time[i].first >> time[i].second;

    sort(time.begin(), time.end());

    priority_queue<int, vector<int>, greater<int>> pQueue;
    pQueue.push(time[0].second);

    for(int i=1; i<N; i++) {
        if(time[i].first < pQueue.top())
            pQueue.push(time[i].second);
        else {
            pQueue.pop();
            pQueue.push(time[i].second);
        }
    }

    cout << pQueue.size();
}
