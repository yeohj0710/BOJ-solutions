#include <bits/stdc++.h>
#define int long long
using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;

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
        cpx dir(cos(angle), sin(angle));

        for(int i=0; i<S; i+=k*2) {
            cpx unit(1, 0);

            for(int j=0; j<k; j++) {
                cpx a = v[i+j];
                cpx b = v[i+j+k] * unit;

                v[i+j] = a + b;
                v[i+j+k] = a - b;

                unit *= dir;
            }
        }
    }

    if(inv)
        for(int i=0; i<S; i++) v[i] /= S;
}

vector<cpx> mul(vector<cpx> &v, vector<cpx> &u) {
    int S = 1;
    while(S < max(v.size(), u.size())) S *= 2;

    v.resize(S); FFT(v, false);
    u.resize(S); FFT(u, false);

    vector<cpx> w(S);
    for(int i=0; i<S; i++) w[i] = v[i] * u[i];
    FFT(w, true);

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<cpx> v(N*2), u(N);

    for(int i=0; i<N; i++) {
        int x; cin >> x;
        v[i] = v[i+N] = cpx(x, 0);
    }
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        u[N-1-i] = cpx(x, 0);
    }

    vector<cpx> w = mul(v, u);

    int ans = 0;
    for(int i=0; i<w.size(); i++) ans = max(ans, (int)round(w[i].real()));

    cout << ans << "\n";
}
