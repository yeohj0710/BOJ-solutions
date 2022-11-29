#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;

void f(vector<int> v, int sum) {
    if(sum == N) {
        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";

        return;
    }

    for(int i=v.back(); i>=1; i--) {
        if(sum + i > N) continue;

        v.push_back(i);
        f(v, sum + i);
        v.pop_back();
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    vector<int> v;

    for(int i=N; i>=1; i--) {
        v.push_back(i);
        f(v, i);
        v.pop_back();
    }
}
