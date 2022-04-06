#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<string> str(N);
        for(int i=0; i<N; i++) cin >> str[i];

        bool foundAns = false;
        for(int i=0; i<N; i++) {
            for(int j=i+1; j<N; j++) {
                for(int k=0; k<2; k++) {
                    string temp;
                    if(k == 0) temp = str[i] + str[j];
                    else temp = str[j] + str[i];

                    bool check = true;
                    for(int l=0; l<temp.length()/2; l++)
                        if(temp[l] != temp[temp.length()-1-l]) {
                            check = false;
                            break;
                        }

                    if(check) {
                        cout << temp << "\n";
                        foundAns = true;
                        break;
                    }
                }
                if(foundAns) break;
            }
            if(foundAns) break;
        }

        if(!foundAns) cout << "0\n";
    }
}
