#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x[16] = {255, 192, 128, 0, 255, 128, 255, 128, 0, 0, 0, 0, 0, 0, 255, 128};
    int y[16] = {255, 192, 128, 0, 0, 0, 255, 128, 255, 128, 255, 128, 0, 0, 0, 0};
    int z[16] = {255, 192, 128, 0, 0, 0, 0, 0, 0, 0, 255, 128, 255, 128, 255, 128};

    string str[16] = {"White", "Silver", "Gray", "Black", "Red", "Maroon", "Yellow",
                       "Olive", "Lime", "Green", "Aqua", "Teal", "Blue", "Navy", "Fuchsia", "Purple"};

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;

        int Min = INT_MAX, ans;

        for(int i=0; i<16; i++) {
            int d = pow(x[i] - a, 2) + pow(y[i] - b, 2) + pow(z[i] - c, 2);

            if(d < Min) {
                Min = d;
                ans = i;
            }
        }

        cout << str[ans] << "\n";
    }
}
