#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    double sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end(), greater<double>());

    double Max = 0, temp = 0, a, b;
    for(int i=0; i<N; i++) {
        temp += v[i];
        if((temp/sum)*100 - (((double)i+1)/N)*100 > Max) {
            Max = (temp/sum)*100 - (((double)i+1)/N)*100;
            a = (((double)i+1)/N)*100;
            b = (temp/sum)*100;
        }
    }

    cout << fixed;
    cout.precision(3);

    cout << a << "\n" << b << "\n";
}
