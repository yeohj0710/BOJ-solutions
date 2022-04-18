#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> book;
    vector<string> List;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        List.push_back(str);
        book[str]++;
    }

    sort(List.begin(), List.end());

    int Max = 0;
    for(int i=0; i<N; i++)
        Max = max(Max, book[List[i]]);

    for(int i=0; i<N; i++)
        if(book[List[i]] == Max) {
            cout << List[i] << "\n";
            return 0;
        }
}
