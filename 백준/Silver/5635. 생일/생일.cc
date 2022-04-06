#include <bits/stdc++.h>
using namespace std;

typedef pair<double, string> Pair;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<tuple<int, int, int, string>> birth(N);
    for(int i=0; i<N; i++) {
        string name; int year, month, day;
        cin >> name >> day >> month >> year;
        birth[i] = {year, month, day, name};
    }

    sort(birth.begin(), birth.end());
    cout << get<3>(birth[N-1]) << "\n" << get<3>(birth[0]);
}
