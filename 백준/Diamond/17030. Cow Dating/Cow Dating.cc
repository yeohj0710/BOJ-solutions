#include <bits/stdc++.h>
#define int long long
using namespace std;

// 공부 목적으로 solution을 참고하였습니다.
// 정리한 풀이 : https://restudycafe.tistory.com/638

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        v[i] *= 1e-6;
    }

    vector<double> u(N+1);

    for(int i=1; i<=N; i++)
        u[i] = u[i-1] + v[i] / (1 - v[i]);

    int i = 1, j = 1;
    double p = 1 - v[1], ans = 0;

    while(j <= N) {
        ans = max(ans, p * (u[j] - u[i-1]));

        if(u[j] - u[i-1] < 1) {
            j++;
            p *= (1 - v[j]);
        }
        else {
            i++;
            p /= (1 - v[i-1]);
        }
    }

    ans = (int)(ans * 1e6);

    cout << ans << "\n";
}
