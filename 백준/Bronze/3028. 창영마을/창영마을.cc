#include <cstdio>
using namespace std;

int main() {
    char c;
    int ball = 1;
    while(scanf("%c", &c) != EOF) {
        if(c == 'A' && ball == 1) ball = 2;
        else if(c == 'A' && ball == 2) ball = 1;
        else if(c == 'B' && ball == 2) ball = 3;
        else if(c == 'B' && ball == 3) ball = 2;
        else if(c == 'C' && ball == 1) ball = 3;
        else if(c == 'C' && ball == 3) ball = 1;
    }
    printf("%d", ball);
}
