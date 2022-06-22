#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = to_string(N);

    for(int i=str.length()-1; i>=0; i--) {
        if(str[i] <= '4') continue;
        else {
            N += pow(10, str.length()-i) - stoll(str.substr(i, str.length()-i));
        }

        str = to_string(N);
    }

    cout << N << "\n";
}
