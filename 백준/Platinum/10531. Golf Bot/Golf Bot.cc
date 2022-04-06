#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;

void FFT(vector<cpx> &f, bool inv) {
    int N = f.size();

    for(int i=1, j=0; i<N; i++) {
        int bit = N/2;

        while(j >= bit) {
            j -= bit;
            bit /= 2;
        }
        j += bit;

        if(i < j) swap(f[i], f[j]);
    }

    for(int k=1; k<N; k*=2) {
        double angle = (inv ? PI/k : -PI/k);
        cpx dir(cos(angle), sin(angle));

        for(int i=0; i<N; i+=k*2) {
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

    vector<cpx> a(200001), b(200001);
    vector<int> dist(200001);

    int N; cin >> N;
    while(N--) {
        int i; cin >> i;

        a[i] = b[i] = cpx(1, 0);
        dist[i] = 1;
    }

    vector<cpx> c = multiply(a, b);

    int M; cin >> M;
    int cnt = 0;
    while(M--) {
        int i; cin >> i;

        if(dist[i] > 0 || round(c[i].real()) > 0) cnt++;
    }

    cout << cnt;
}
