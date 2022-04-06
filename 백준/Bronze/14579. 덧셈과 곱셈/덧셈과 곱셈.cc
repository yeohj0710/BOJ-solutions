#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long a, b; cin >> a >> b;
    long long ans = 1;
    for(int i=a; i<=b; i++) {
        long long sum = 0;
        for(int j=1; j<=i; j++) sum += j;
        ans = (ans*sum)%14579;
    }
    cout << ans;
}
