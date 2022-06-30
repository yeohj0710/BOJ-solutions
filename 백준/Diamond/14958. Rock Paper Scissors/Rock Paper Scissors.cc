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

    vector<int> w(S);
    for(int i=0; i<S; i++) w[i] = round(vc[i].real());

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string a, b; cin >> a >> b;
    reverse(b.begin(), b.end());

    vector<int> v(N), u(M), win(N+M-1);


    for(int i=0; i<N; i++) {
        if(a[i] == 'R') v[i] = 1;
        else v[i] = 0;
    }
    for(int i=0; i<M; i++) {
        if(b[i] == 'P') u[i] = 1;
        else u[i] = 0;
    }

    vector<int> w = mul(v, u);
    for(int i=0; i<N+M-1; i++) win[i] += w[i];


    for(int i=0; i<N; i++) {
        if(a[i] == 'P') v[i] = 1;
        else v[i] = 0;
    }
    for(int i=0; i<M; i++) {
        if(b[i] == 'S') u[i] = 1;
        else u[i] = 0;
    }

    w = mul(v, u);
    for(int i=0; i<N+M-1; i++) win[i] += w[i];


    for(int i=0; i<N; i++) {
        if(a[i] == 'S') v[i] = 1;
        else v[i] = 0;
    }
    for(int i=0; i<M; i++) {
        if(b[i] == 'R') u[i] = 1;
        else u[i] = 0;
    }

    w = mul(v, u);
    for(int i=0; i<N+M-1; i++) win[i] += w[i];


    int ans = 0;
    for(int i=M-1; i<N+M-1; i++) ans = max(ans, win[i]);

    cout << ans << "\n";
}
