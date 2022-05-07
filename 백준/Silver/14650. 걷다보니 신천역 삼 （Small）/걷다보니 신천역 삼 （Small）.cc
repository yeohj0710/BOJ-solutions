#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sour = pow(3, N-1);
    int dest = pow(3, N);

    int ans = 0;

    for(int i=sour; i<dest; i++) {
        int temp = i;

        string num = "";

        while(temp > 0) {
            num = char(temp % 3 + '0') + num;

            temp /= 3;
        }

        if(stoll(num) % 3 == 0) ans++;
    }

    cout << ans << "\n";
}
