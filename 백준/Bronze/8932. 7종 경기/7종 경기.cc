#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    double A[7] = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
    double B[7] = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
    double C[7] = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};

    while(T--) {
        double sum = 0;

        for(int i=0; i<7; i++) {
            double value; cin >> value;
            sum += int(A[i] * pow(abs(B[i] - value), C[i]));
        }

        cout << sum << "\n";
    }
}
