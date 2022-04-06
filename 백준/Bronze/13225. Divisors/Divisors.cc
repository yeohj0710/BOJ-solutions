#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    while(N--) {
        int val; cin >> val;
        int cnt = 0;
        for(int i=1; i<=val; i++)
            if(val%i == 0) cnt++;
        cout << val << " " << cnt << "\n";
    }
}
