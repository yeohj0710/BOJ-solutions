#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v;
        v.push_back(N);

        while(true) {
            string temp = to_string(N * N);

            while(temp.length() < 8) temp = "0" + temp;

            int next = stoi(temp.substr(2, 4));

            bool check = false;
            for(int i=0; i<v.size(); i++)
                if(v[i] == next) check = true;

            if(check) break;
            else v.push_back(next);

            N = next;
        }

        cout << v.size() << "\n";
    }
}

