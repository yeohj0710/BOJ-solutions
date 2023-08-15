#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {60, 100, 140, 200, 250};

    int N; cin >> N;

    vector<int> u(N);

    for(int i=0; i<N; i++) cin >> u[i];

    sort(u.begin(), u.end(), greater<int>());

    int sum = 0, score = 0;
    
    N = min(N, (int)42);

    for(int i=0; i<N; i++) {
        sum += u[i];

        for(int j=0; j<v.size(); j++)
            if(u[i] >= v[j]) score++;
    }

    cout << sum << " " << score << "\n";
}

