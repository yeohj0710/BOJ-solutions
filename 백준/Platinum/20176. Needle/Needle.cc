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
        cpx w(cos(angle), sin(angle));

        for(int i=0; i<S; i+=k*2) {
            cpx z(1, 0);

            for(int j=0; j<k; j++) {
                cpx even = v[i+j];
                cpx odd = v[i+j+k];

                v[i+j] = even + z*odd;
                v[i+j+k] = even - z*odd;

                z *= w;
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

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<cpx> v(60001), u(60001), w(60001);

    int N; cin >> N;
    while(N--) {
        int x; cin >> x;
        v[x + 30000] = cpx(1, 0);
    }

    int M; cin >> M;
    while(M--) {
        int x; cin >> x;
        u[x + 30000] = cpx(1, 0);
    }

    int K; cin >> K;
    while(K--) {
        int x; cin >> x;
        w[x + 30000] = cpx(1, 0);
    }

    vector<cpx> vw = mul(v, w);

    int ans = 0;
    for(int i=0; i<=60000; i++)
        ans += round(u[i].real()) * round(vw[i*2].real());

    cout << ans << "\n";
}
