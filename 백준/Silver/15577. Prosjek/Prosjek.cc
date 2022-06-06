#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<double, vector<double>, greater<double>> pq;

    for(int i=0; i<N; i++) {
        double x; cin >> x;
        pq.push(x);
    }

    for(int i=0; i<N-1; i++) {
        double x = pq.top(); pq.pop();
        double y = pq.top(); pq.pop();

        pq.push((x + y)/2);
    }

    cout << fixed;
    cout.precision(6);

    cout << pq.top() << "\n";
}
