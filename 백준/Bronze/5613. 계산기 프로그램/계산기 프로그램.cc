#include <cstdio>
using namespace std;

int main() {
    int b, ans;
    char op;
    scanf(" %d", &ans);
    while(1) {
        scanf(" %c", &op);
        if(op == '=') break;
        scanf(" %d", &b);
        if(op == '+') ans += b;
        else if(op == '-') ans -= b;
        else if(op == '*') ans *= b;
        else if(op == '/') ans /= b;
    }
    printf("%d", ans);
}
