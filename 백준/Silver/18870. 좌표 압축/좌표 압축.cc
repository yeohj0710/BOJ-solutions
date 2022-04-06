#include <bits/stdc++.h>
using namespace std;

vector<int> input, arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int val; cin >> val;
        input.push_back(val), arr.push_back(val);
    }

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for(int i=0; i<input.size(); i++)
        cout << lower_bound(arr.begin(), arr.end(), input[i]) - arr.begin() << " ";
}
