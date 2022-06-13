#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int N; cin >> N;

    int sum = 0;
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        sum = sum * a + x;
    }

    vector<int> v;

    while(sum > 0) {
        v.push_back(sum % b);
        sum /= b;
    }

    for(int i=v.size()-1; i>=0; i--) cout << v[i] << " ";
    cout << "\n";
}
