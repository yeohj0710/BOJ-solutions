#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T, N, M, val, temp_idx, temp_val, cnt;
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> N >> M;
        queue<pair<int, int>> doc;
        priority_queue<int> doc_priority;
        cnt = 0;
        for(int j=0; j<N; j++) {
            cin >> val;
            doc.push({j, val});
            doc_priority.push(val);
        }
        while(!doc.empty()) {
            temp_idx = doc.front().first;
            temp_val = doc.front().second;
            doc.pop();
            if(temp_val == doc_priority.top()) {
                doc_priority.pop();
                cnt++;
                if(temp_idx == M) break;
            }
            else doc.push({temp_idx, temp_val});
        }
        cout << cnt << "\n";
    }
}
