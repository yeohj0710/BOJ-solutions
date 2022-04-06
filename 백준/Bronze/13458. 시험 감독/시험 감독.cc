#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> num(N);
    for(int i=0; i<N; i++) cin >> num[i];

    int A, B; cin >> A >> B;

    long long ans = N;
    for(int i=0; i<N; i++)
        if(num[i] > A) ans += (num[i] - A - 1)/B + 1;

    cout << ans;
}
