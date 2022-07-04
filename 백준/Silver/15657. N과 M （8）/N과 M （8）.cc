#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v, u;

void f(int cnt) {
    if(u.size() == M) {
        bool check = true;
        for(int i=0; i<u.size()-1; i++)
            if(u[i] > u[i+1]) check = false;
        if(!check) return;

        for(int i=0; i<u.size(); i++) cout << u[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=0; i<N; i++) {
        u.push_back(v[i]);
        f(cnt+1);
        u.pop_back();
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    f(1);
}
