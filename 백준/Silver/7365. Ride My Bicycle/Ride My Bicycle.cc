#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> u(3), v(7);
    for(int i=0; i<3; i++) cin >> u[i];
    for(int i=0; i<7; i++) cin >> v[i];

    vector<pair<double, pair<int, int>>> arr;
    for(int i=0; i<3; i++)
        for(int j=0; j<7; j++) arr.push_back({(double)u[i]/v[j], {i+1, j+1}});

    sort(arr.begin(), arr.end());

    cout << fixed;
    cout.precision(2);

    for(int i=0; i<arr.size(); i++)
        cout << arr[i].first << " " << arr[i].second.first << " " << arr[i].second.second << "\n";
}
