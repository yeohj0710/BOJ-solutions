#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<int> Arr;
    for(int i=0; i<N; i++) {
        int val; cin >> val;
        Arr.push_back(val);
    }
    sort(Arr.begin(), Arr.end());
    int sum = 0;
    for(int i=0; i<Arr.size()-1; i++) sum += Arr[i];
    cout << sum;
}
