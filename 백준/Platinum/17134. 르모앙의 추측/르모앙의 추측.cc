#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

const double PI = acos(-1);
typedef long long ll;
typedef complex<double> cpx;

void FFT(vector<cpx> &f, cpx x) {
    int n = f.size();
    if(n == 1) return;

    vector<cpx> even(n/2), odd(n/2);
    for(int i=0; i<n; i++) {
        if(i % 2 == 0) even[i/2] = f[i];
        else odd[i/2] = f[i];
    }

    FFT(even, x*x);
    FFT(odd, x*x);

    cpx unit(1, 0);
    for(int i=0; i<n/2; i++) {
        f[i] = even[i] + unit*odd[i];
        f[i + n/2] = even[i] - unit*odd[i];

        unit *= x;
    }
}

vector<ll> multiply(vector<ll> &a, vector<ll> &b) {
    vector<ll> c(a.size() + b.size() - 1);

    int n = 1;
    while(n <= a.size() || n <= b.size()) n *= 2;
    n *= 2;

    a.resize(n);
    b.resize(n);

    vector<cpx> a_(n), b_(n);
    for(int i=0; i<n; i++) {
        a_[i] = cpx(a[i], 0);
        b_[i] = cpx(b[i], 0);
    }
    cpx unit(cos(2*PI/n), sin(2*PI/n));

    FFT(a_, unit);
    FFT(b_, unit);

    vector<cpx> c_(n);
    for(int i=0; i<n; i++) c_[i] = a_[i] * b_[i];

    FFT(c_, cpx(1, 0)/unit);
    for(int i=0; i<n; i++) c_[i] /= cpx(n, 0);

    for(int i=0; i<c.size(); i++) c[i] = round(c_[i].real());

    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool not_prime[MAX] = {};
    for(int i=2; i*i<MAX; i++)
        for(int j=2; i*j<MAX; j++) not_prime[i*j] = true;

    vector<ll> a(MAX), b(MAX);
    for(int i=3; i<MAX; i++)
        if(!not_prime[i]) a[i] = 1;
    for(int i=2; i*2<MAX; i++)
        if(!not_prime[i]) b[i*2] = 1;

    vector<ll> c = multiply(a, b);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << c[N] << "\n";
    }
}
