#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    deque<int> dq;

    for(int i=1; i<=N; i++) {
        int x = v.back();
        v.pop_back();

        if(x == 1) dq.push_front(i);
        else if(x == 2) {
            int pop = dq.front();
            dq.pop_front();
            dq.push_front(i);
            dq.push_front(pop);
        }
        else if(x == 3) dq.push_back(i);
    }

    for(int i=0; i<dq.size(); i++) cout << dq[i] << " ";
    cout << "\n";
}
