#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(8);

    int N; cin >> N;
    double E; cin >> E;

    vector<double> s(N), k(N), v(N), v_(N);
    for(int i=0; i<N; i++)
        cin >> s[i] >> k[i] >> v_[i];

    double l_left = -1e10, l_right = 0, l_mid;
    for(int cnt=0; cnt<100; cnt++) {
        l_mid = (l_left + l_right)/2;

        double sum = 0;
        for(int i=0; i<N; i++) {
            double v_left = v_[i], v_right = 1e8, v_mid;

            for(int cnt2=0; cnt2<100; cnt2++) {
                v_mid = (v_left + v_right)/2;

                double temp = 2*l_mid*k[i]*v_mid*v_mid*(v_mid-v_[i]) + 1;
                if(temp < 0) v_right = v_mid;
                else if(temp > 0) v_left = v_mid;
            }

            v[i] = v_mid;
            sum += k[i]*(v[i]-v_[i])*(v[i]-v_[i])*s[i];
        }

        if(sum < E) l_left = l_mid;
        else if(sum > E) l_right = l_mid;
    }

    double ans = 0;
    for(int i=0; i<N; i++) ans += s[i]/v[i];

    cout << ans;
}
