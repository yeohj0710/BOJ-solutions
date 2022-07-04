#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v;

void f(int idx) {
    if(v.size() == M) {
        bool check = true;
        for(int i=0; i<v.size()-1; i++)
            if(v[i] > v[i+1]) check = false;
        if(!check) return;

        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=1; i<=N; i++) {
        v.push_back(i);
        f(idx+1);
        v.pop_back();
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    f(1);
}
