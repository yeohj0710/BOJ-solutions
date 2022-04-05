#include <bits/stdc++.h>
#define MAX 200001
using namespace std;

const double PI = acos(-1);
typedef long long ll;
typedef complex<double> cpx;

void FFT(vector<cpx> &f, bool inv) {
    int N = f.size();
    vector<cpx> roots(N/2);

    int j = 0;
    for(int i=1; i<N; i++) {
        int bit = N/2;

        while(j >= bit) {
            j -= bit;
            bit /= 2;
        }
        j += bit;

        if(i < j) swap(f[i], f[j]);
    }

    double angle;
    if(!inv) angle = 2 * M_PI / N;
    else angle = (-1) * 2 * M_PI / N;

    for(int i=0; i<N/2; i++)
        roots[i] = cpx(cos(angle * i), sin(angle * i));

    for(int i=2; i<=N; i*=2) {
        int step = N / i;

        for(int j=0; j<N; j+=i)
            for(int k=0; k<i/2; k++) {
                cpx u = f[j + k];
                cpx v = f[j + k + i/2] * roots[step * k];

                f[j + k] = u + v;
                f[j + k + i/2] = u - v;
            }
    }

    if(inv)
        for(int i=0; i<N; i++) f[i] /= N;
}

vector<ll> multiply(vector<ll> &a, vector<ll> &b) {
    vector<cpx> a_(a.begin(), a.end());
    vector<cpx> b_(b.begin(), b.end());

    int N = 2;
    while(N < a.size() + b.size()) N *= 2;

    a_.resize(N); FFT(a_, false);
    b_.resize(N); FFT(b_, false);

    vector<cpx> c_(N);
    for(int i=0; i<N; i++) c_[i] = a_[i] * b_[i];
    FFT(c_, true);

    vector<long long> c(N);
    for(int i=0; i<N; i++) c[i] = (long long)round(c_[i].real());

    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<ll> a(MAX), b(MAX);

    int N; cin >> N;
    while(N--) {
        int value; cin >> value;

        a[value] = b[value] = 1;
    }

    vector<ll> c = multiply(a, b);

    int M; cin >> M;
    int cnt = 0;
    while(M--) {
        int value; cin >> value;

        if(a[value] > 0 || c[value] > 0) cnt++;
    }

    cout << cnt;
}
