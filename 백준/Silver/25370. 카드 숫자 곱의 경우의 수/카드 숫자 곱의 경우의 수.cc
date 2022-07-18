#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> v;

void f(int cnt, int mul) {
    if(cnt == N) {
        v.push_back(mul);
        return;
    }

    for(int i=1; i<=9; i++) {
        f(cnt+1, mul*i);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    f(0, 1);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << "\n";
}
