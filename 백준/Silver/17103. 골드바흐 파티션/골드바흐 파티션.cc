#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;

void FFT(vector<cpx> &f, bool inv) {
    int N = f.size();

    for(int i=1, j=0; i<N; i++) {
        int bit = N >> 1;

        while(!((j ^= bit) & bit)) bit >>= 1;

        if(i < j) swap(f[i], f[j]);
    }

    for(int k=1; k<N; k<<=1) {
        double angle = (inv ? PI/k : -PI/k);
        cpx dir(cos(angle), sin(angle));

        for(int i=0; i<N; i+=(k<<1)) {
            cpx unit(1, 0);

            for(int j=0; j<k; j++) {
                cpx u = f[i+j];
                cpx v = f[i+j+k] * unit;

                f[i+j] = u + v;
                f[i+j+k] = u - v;

                unit *= dir;
            }
        }
    }

    if(inv)
        for(int i=0; i<N; i++) f[i] /= N;
}

vector<cpx> multiply(vector<cpx> &a, vector<cpx> &b) {
    int N = 1;
    while(N < a.size() + b.size()) N *= 2;

    a.resize(N); FFT(a, false);
    b.resize(N); FFT(b, false);

    vector<cpx> c(N);
    for(int i=0; i<N; i++) c[i] = a[i] * b[i];
    FFT(c, true);

    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool prime[MAX] = {};
    for(int i=2; i<MAX; i++) prime[i] = true;
    for(int i=2; i*i<MAX; i++)
        for(int j=2; i*j<MAX; j++) prime[i*j] = false;

    vector<cpx> a(MAX/2), b(MAX/2);
    for(int i=1; i<MAX/2; i++)
        if(prime[i*2+1]) a[i] = b[i] = cpx(1, 0);

    vector<cpx> c = multiply(a, b);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(N == 4) cout << "1\n";
        else if(N % 2 == 0 && prime[N/2]) cout << (round(c[(N-1)/2].real()) - 1)/2 + 1 << "\n";
        else cout << round(c[(N-1)/2].real())/2 << "\n";
    }
}
