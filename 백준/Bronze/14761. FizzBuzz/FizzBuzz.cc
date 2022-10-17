#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, N; cin >> a >> b >> N;

    for(int i=1; i<=N; i++) {
        if(i % a == 0 && i % b == 0) cout << "FizzBuzz\n";
        else if(i % a == 0) cout << "Fizz\n";
        else if(i % b == 0) cout << "Buzz\n";
        else cout << i << "\n";
    }
}
