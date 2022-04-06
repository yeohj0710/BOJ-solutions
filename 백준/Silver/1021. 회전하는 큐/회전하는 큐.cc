#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> key(M);
    for(int i=0; i<M; i++) cin >> key[i];

    deque<int> Deque;
    for(int i=1; i<=N; i++) Deque.push_back(i);

    int cnt = 0;
    for(int i=0; i<M; i++) {
        int location;
        for(int j=0; j<Deque.size(); j++)
            if(Deque[j] == key[i]) {
                location = j;
                break;
            }

        if(location <= Deque.size()/2) {
            while(Deque.front() != key[i]) {
                Deque.push_back(Deque.front());
                Deque.pop_front();
                cnt++;
            }
            Deque.pop_front();
        }
        else {
            while(Deque.back() != key[i]) {
                Deque.push_front(Deque.back());
                Deque.pop_back();
                cnt++;
            }
            Deque.pop_back();
            cnt++;
        }
    }
    cout << cnt;
}
