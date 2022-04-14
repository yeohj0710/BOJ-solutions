#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int N;
vector<int> arr;
bool check[MAX] = {};

void DFS(int cnt) {
    if(cnt == N) {
        for(int i=0; i<arr.size(); i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    for(int i=1; i<=N; i++) {
        if(!check[i]) {
            arr.push_back(i);
            check[i] = true;

            DFS(cnt+1);

            arr.pop_back();
            check[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    DFS(0);
}
