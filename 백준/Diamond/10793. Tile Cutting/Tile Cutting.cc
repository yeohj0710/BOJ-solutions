#include <bits/stdc++.h>
#define int long long
using namespace std;

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
        double angle = (inv ? M_PI/k : -M_PI/k);
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

vector<int> mul(vector<int> &v, vector<int> &u) {
    vector<cpx> vc(v.begin(), v.end());
    vector<cpx> uc(u.begin(), u.end());

    int S = 2;
    while(S < v.size() + u.size()) S *= 2;

    vc.resize(S); FFT(vc, false);
    uc.resize(S); FFT(uc, false);

    for(int i=0; i<S; i++) vc[i] *= uc[i];
    FFT(vc, true);

    vector<int> w(v.size() + u.size() - 1);
    for(int i=0; i<w.size(); i++) w[i] = round(vc[i].real());

    return w;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(5e5 + 1);

    for(int i=1; i<=5e5; i++)
        for(int j=1; i*j<=5e5; j++) v[i*j]++;

    v = mul(v, v);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int mx = -1, idx = 0;

        for(int i=a; i<=b; i++)
            if(v[i] > mx) {
                mx = max(mx, v[i]);
                idx = i;
            }

        cout << idx << " " << mx << "\n";
    }
}
