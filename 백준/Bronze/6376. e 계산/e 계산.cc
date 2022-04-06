#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << "n e\n";
    cout << "- -----------\n";

    for(int i=0; i<=9; i++) {
        cout << i << " ";

        double sum = 0;
        for(int j=0; j<=i; j++) {
            double factorial = 1;
            for(int k=1; k<=j; k++) factorial *= k;
            sum += 1/factorial;
        }

        if(i == 3) {
            cout << fixed;
            cout.precision(9);
        }

        cout << sum << "\n";
    }
}
