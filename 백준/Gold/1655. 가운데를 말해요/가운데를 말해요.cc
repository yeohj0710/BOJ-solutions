#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    while(N--) {
        int x; cin >> x;

        if(maxHeap.size() == minHeap.size()) maxHeap.push(x);
        else minHeap.push(x);

        if(!maxHeap.empty() && !minHeap.empty() && maxHeap.top() > minHeap.top()) {
            int tempMax = maxHeap.top();
            int tempMin = minHeap.top();
            maxHeap.pop();
            minHeap.pop();
            maxHeap.push(tempMin);
            minHeap.push(tempMax);
        }

        cout << maxHeap.top() << "\n";
    }
}
