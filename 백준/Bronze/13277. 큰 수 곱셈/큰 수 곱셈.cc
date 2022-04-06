#include <bits/stdc++.h>
using namespace std;

void fft(vector<complex<double>> &v, bool inv) {
    int N = v.size();
    vector<complex<double>> roots(N/2);

    int j = 0;
    for(int i=1; i<N; i++) {
        int bit = N/2;

        while(j >= bit) {
            j -= bit;
            bit /= 2;
        }
        j += bit;

        if(i < j) swap(v[i], v[j]);
    }

    double angle;
    if(!inv) angle = 2 * M_PI / N;
    else angle = (-1) * 2 * M_PI / N;

    for(int i=0; i<N/2; i++)
        roots[i] = complex<double>(cos(angle * i), sin(angle * i));

    for(int i=2; i<=N; i*=2) {
        int step = N / i;

        for(int j=0; j<N; j+=i)
            for(int k=0; k<i/2; k++) {
                complex<double> a = v[j + k];
                complex<double> b = v[j + k + i/2] * roots[step * k];

                v[j + k] = a + b;
                v[j + k + i/2] = a - b;
            }
    }

    if(inv)
        for(int i=0; i<N; i++) v[i] /= N;
}

vector<long long> multiply(vector<long long> &v, vector<long long> &w) {
    vector<complex<double>> fv(v.begin(), v.end());
    vector<complex<double>> fw(w.begin(), w.end());

    int Size = 2;
    while(Size < v.size() + w.size()) Size *= 2;

    fv.resize(Size); fft(fv, false);
    fw.resize(Size); fft(fw, false);

    vector<complex<double>> mul(Size);
    for(int i=0; i<Size; i++) mul[i] = fv[i] * fw[i];
    fft(mul, true);

    vector<long long> mul_(Size);
    for(int i=0; i<Size; i++) mul_[i] = (long long)round(mul[i].real());

    return mul_;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    vector<long long> v;
    vector<long long> w;

    for(int i=0; i<a.length(); i++) v.push_back(a[i] - '0');
    for(int i=0; i<b.length(); i++) w.push_back(b[i] - '0');

    reverse(v.begin(), v.end());
    reverse(w.begin(), w.end());

    vector<long long> mul = multiply(v, w);

    for(int i=0; i<mul.size(); i++) {
        if(mul[i] >= 10) {
            if(i == mul.size()-1)
                mul.push_back(mul[i]/10);
            else
                mul[i+1] += mul[i]/10;

            mul[i] %= 10;
        }
    }

    reverse(mul.begin(), mul.end());

    bool start = false;
    for(auto element : mul) {
        if(element) start = true;
        if(start) cout << element;
    }
    if(!start) cout << "0";
}
