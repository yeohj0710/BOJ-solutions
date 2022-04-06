#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, D[40000], head = 20000, tail = 20001, digit;
    string input;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> input;
        if(!input.compare("push_front")) {
            cin >> digit;
            D[head--] = digit;
        }
        else if(!input.compare("push_back")) {
            cin >> digit;
            D[tail++] = digit;
        }
        else if(!input.compare("pop_front")) {
            if(head+1 == tail) cout << "-1\n";
            else cout << D[++head] << "\n";
        }
        else if(!input.compare("pop_back")) {
            if(head+1 == tail) cout << "-1\n";
            else cout << D[--tail] << "\n";
        }
        else if(!input.compare("size")) cout << tail-head-1 << "\n";
        else if(!input.compare("empty")) {
            if(head+1 == tail) cout << "1\n";
            else cout << "0\n";
        }
        else if(!input.compare("front")) {
            if(head+1 == tail) cout << "-1\n";
            else cout << D[head+1] << "\n";
        }
        else if(!input.compare("back")) {
            if(head+1 == tail) cout << "-1\n";
            else cout << D[tail-1] << "\n";
        }
    }
}
