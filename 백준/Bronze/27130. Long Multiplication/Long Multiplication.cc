#include <bits/stdc++.h>
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
    for(int i=0; i<n; i++) c_[i] = a_[i]*b_[i];

    FFT(c_, cpx(1, 0)/unit);
    for(int i=0; i<n; i++) c_[i] /= cpx(n, 0);

    for(int i=0; i<c.size(); i++) c[i] = round(c_[i].real());

    return c;
}

void f(string a_str, string b_str) {
    vector<ll> a, b;
    for(int i=0; i<a_str.length(); i++) a.push_back(a_str[i] - '0');
    for(int i=0; i<b_str.length(); i++) b.push_back(b_str[i] - '0');

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<ll> c = multiply(a, b);

    for(int i=0; i<c.size(); i++) {
        if(c[i] < 10) continue;

        if(i == c.size()-1) c.push_back(c[i]/10);
        else c[i+1] += c[i]/10;

        c[i] %= 10;
    }

    reverse(c.begin(), c.end());

    int i = 0;
    while(c[i] == 0) i++;
    if(i >= c.size()) cout << "0";

    while(i < c.size()) {
        cout << c[i];
        i++;
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    cout << a << "\n";
    cout << b << "\n";

    for(int i=b.length()-1; i>=0; i--) f(a, b.substr(i, 1));

    f(a, b);
}
