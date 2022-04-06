#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        string Function; cin >> Function;
        int numCnt; cin >> numCnt;
        string num; cin >> num;

        string tempNum;
        deque<int> Deque;
        for(int i=0; i<num.length(); i++) {
            if(num[i] >= '0' && num[i] <= '9')
                tempNum += num[i];
            else if((num[i] == ',' || num[i] == ']') && !tempNum.empty()) {
                Deque.push_back(stoi(tempNum));
                tempNum.clear();
            }
        }

        bool isReversed = false, isError = false;
        for(int i=0; i<Function.length(); i++) {
            if(Function[i] == 'R') isReversed = !isReversed;
            else {
                if(!Deque.empty()) {
                    if(!isReversed) Deque.pop_front();
                    else Deque.pop_back();
                }
                else {
                    isError = true;
                    cout << "error\n";
                    break;
                }
            }
        }

        if(!isError) {
            cout << "[";

            while(!Deque.empty()) {
                if(!isReversed) {
                    cout << Deque.front();
                    Deque.pop_front();
                }
                else {
                    cout << Deque.back();
                    Deque.pop_back();
                }

                if(!Deque.empty()) cout << ",";
            }

            cout << "]\n";
        }
    }
}
