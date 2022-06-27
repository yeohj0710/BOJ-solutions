#include <bits/stdc++.h>
#define int long long
using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;
const int MOD = (int)(1e5 + 3);

void FFT(vector<cpx> &v, bool inv) {
    int S = v.size();

    for(int i=1, j=0; i<S; i++) {
        int bit = S/2;

        while(j >= bit) {
            j -= bit;
            bit /= 2;
        }
        j += bit;

        if(i < j) swap(v[i], v[j]);
    }

    for(int k=1; k<S; k*=2) {
        double angle = (inv ? PI/k : -PI/k);

        for(int i=0; i<S; i+=k*2) {
            for(int j=0; j<k; j++) {
                cpx even = v[i+j], odd = v[i+j+k];
                cpx w = cpx(cos(angle*j), sin(angle*j));

                v[i+j] = even + w*odd;
                v[i+j+k] = even - w*odd;
            }
        }
    }

    if(inv)
        for(int i=0; i<S; i++) v[i] /= S;
}

vector<cpx> mul(vector<cpx> v, vector<cpx> u) {
    int S = 2;
    while(S < v.size() + u.size()) S *= 2;

    v.resize(S); FFT(v, false);
    u.resize(S); FFT(u, false);

    vector<cpx> w(S);
    for(int i=0; i<S; i++) w[i] = v[i] * u[i];
    FFT(w, true);

    for(int i=0; i<S; i++) w[i] = {(int)round(w[i].real()) % MOD, 0};

    return w;
}

vector<cpx> mul(const vector<vector<cpx>> &v, int l, int r) {
    if(l == r) return v[l];

    return mul(mul(v, l, (l+r)/2), mul(v, (l+r)/2 + 1, r));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<cpx>> v(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        v[i] = {cpx(x, 0), cpx(1, 0)};
    }

    vector<cpx> ans = mul(v, 0, N-1);

    int M; cin >> M;
    int MOD = (int)(1e6 + 3);

    while(M--) {
        int x; cin >> x;
        cout << ans[N - x].real() << "\n";
    }
}
