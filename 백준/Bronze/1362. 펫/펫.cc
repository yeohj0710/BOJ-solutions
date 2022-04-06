#include<stdio.h>

int main() {
    float o, w, n;
    char c;
    int isRIP;
    for(int i=1; ; i++) {
        isRIP = 0;
        scanf("%f %f", &o, &w);
        if(o == 0 && w == 0) return 0;
        while(1) {
            scanf("%c %f", &c, &n);
            if(c == '#' && n == 0) {
                printf("%d ", i);
                if(isRIP) printf("RIP\n");
                else if(w > 0.5*o && w < 2*o) printf(":-)\n");
                else printf(":-(\n");
                break;
            }
            else if(c == 'E') {
                if(w-n <= 0) isRIP = 1;
                w -= n;
            }
            else if(c == 'F') w += n;
        }
    }
}
