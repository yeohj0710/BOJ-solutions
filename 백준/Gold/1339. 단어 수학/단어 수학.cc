#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sum[26] = {};
    while(N--) {
        string str; cin >> str;

        int temp = 1;
        for(int j=str.length()-1; j>=0; j--) {
            sum[str[j] - 'A'] += temp;
            temp *= 10;
        }
    }

    sort(sum, sum+26, greater<int>());

    int ans = 0;
    for(int i=0; i<10; i++)
        ans += sum[i] * (9 - i);

    cout << ans;
}
