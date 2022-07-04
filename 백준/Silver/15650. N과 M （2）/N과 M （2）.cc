#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v;

void f(int idx) {
    if(idx == N+1) {
        if(v.size() == M) {
            for(int i=0; i<v.size(); i++) cout << v[i] << " ";
            cout << "\n";
        }
        return;
    }

    v.push_back(idx);
    f(idx+1);
    
    v.pop_back();
    f(idx+1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    f(1);
}
