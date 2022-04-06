#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int s = 1, b = 4;
    char mix[205];
    scanf("%s", mix);
    for(int i=0; i<strlen(mix); i++) {
        if(mix[i] == 'A') {
            if(s == 1) s = 2;
            else if(s == 2) s = 1;
            if(b == 1) b = 2;
            else if(b == 2) b = 1;
        }
        if(mix[i] == 'B') {
            if(s == 1) s = 3;
            else if(s == 3) s = 1;
            if(b == 1) b = 3;
            else if(b == 3) b = 1;
        }
        if(mix[i] == 'C') {
            if(s == 1) s = 4;
            else if(s == 4) s = 1;
            if(b == 1) b = 4;
            else if(b == 4) b = 1;
        }
        if(mix[i] == 'D') {
            if(s == 2) s = 3;
            else if(s == 3) s = 2;
            if(b == 2) b = 3;
            else if(b == 3) b = 2;
        }
        if(mix[i] == 'E') {
            if(s == 2) s = 4;
            else if(s == 4) s = 2;
            if(b == 2) b = 4;
            else if(b == 4) b = 2;
        }
        if(mix[i] == 'F') {
            if(s == 3) s = 4;
            else if(s == 4) s = 3;
            if(b == 3) b = 4;
            else if(b == 4) b = 3;
        }
    }
    printf("%d\n%d", s, b);
}
