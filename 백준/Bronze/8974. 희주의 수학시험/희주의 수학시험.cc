#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, B; cin >> A >> B;

    vector<int> arr;
    arr.push_back(0);

    int cnt = 0;
    for(int i=1; ; i++) {
        bool check = false;
        for(int j=1; j<=i; j++) {
            arr.push_back(i);
            cnt++;

            if(cnt == B) {
                check = true;
                break;
            }
        }
        if(check) break;
    }

    int sum = 0;
    for(int i=A; i<=B; i++) sum += arr[i];

    cout << sum << "\n";
}
