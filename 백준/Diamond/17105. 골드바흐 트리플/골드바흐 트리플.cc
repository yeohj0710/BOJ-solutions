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

    int Max = 1e6 + 1;

    vector<bool> isp(Max, true);
    isp[0] = isp[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) isp[i*j] = false;

    vector<int> p;
    for(int i=2; i<Max; i++)
        if(isp[i]) p.push_back(i);

    vector<int> v(1e6 + 1), u(1e6 + 1), w(1e6 + 1);

    for(int i=0; i<p.size(); i++) v[p[i]]++;

    vector<int> vv = mul(v, v);
    vv.resize(1e6 + 1);

    v = mul(vv, v);
    v.resize(1e6 + 1);

    for(int i=0; i<p.size(); i++) u[p[i]]++;

    vector<int> uu(1e6 + 1);

    for(int i=0; i<p.size(); i++) {
        int x = p[i] * 2;

        if(x > 1e6) break;

        uu[x]++;
    }

    u = mul(uu, u);
    u.resize(1e6 + 1);

    for(int i=0; i<p.size(); i++) {
        int x = p[i] * 3;

        if(x > 1e6) break;

        w[x]++;
    }

    for(int i=1; i<=1e6; i++) {
        u[i] -= w[i];
        v[i] = (v[i] - u[i] * 3 - w[i]) / 6;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << v[N] + u[N] + w[N] << "\n";
    }
}
