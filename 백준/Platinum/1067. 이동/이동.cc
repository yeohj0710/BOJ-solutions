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

    int N; cin >> N;

    vector<long long> v(N*2), w(N);

    for(int i=0; i<N; i++) {
        cin >> v[i];
        v[i + N] = v[i];
    }
    for(int i=1; i<=N; i++) cin >> w[N - i];

    vector<long long> mul = multiply(v, w);

    long long ans = 0;
    for(int i=0; i<mul.size(); i++)
        ans = max(ans, mul[i]);

    cout << ans;
}
