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

    int temp; cin >> temp >> temp;

    string a_str, b_str; cin >> a_str >> b_str;

    vector<cpx> a, b;
    for(int i=0; i<a_str.length(); i++) a.push_back(cpx(a_str[i] - '0', 0));
    for(int i=0; i<b_str.length(); i++) b.push_back(cpx(b_str[i] - '0', 0));

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<cpx> c_ = multiply(a, b);

    vector<int> c;
    for(int i=0; i<c_.size(); i++) c.push_back(round(c_[i].real()));

    for(int i=0; i<c.size(); i++) {
        if(c[i] < 10) continue;

        if(i < c.size()-1) c[i+1] += c[i]/10;
        else c.push_back(c[i]/10);

        c[i] %= 10;
    }

    reverse(c.begin(), c.end());

    int i = 0; while(c[i] == 0) i++;
    if(i >= c.size()) cout << "0";

    while(i < c.size()) {
        cout << c[i];
        i++;
    }
}
