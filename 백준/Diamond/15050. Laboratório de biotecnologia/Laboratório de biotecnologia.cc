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

    string str; cin >> str;

    int N = str.length();

    vector<int> v(N+1);
    for(int i=1; i<=N; i++)
        v[i] = v[i-1] + (str[i-1] - 'a' + 1);

    vector<int> u(6e6), w(6e6);

    for(int i=0; i<=N; i++) u[3e6 + v[i]]++, w[3e6 - v[i]]++;

    vector<int> vv = mul(u, w);

    int ans = 0;

    for(int i=1; i<=v[N]; i++)
        if(vv[6e6 + i] > 0) ans++;

    cout << ans << "\n";
}
