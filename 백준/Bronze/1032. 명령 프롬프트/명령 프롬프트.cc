#include<stdio.h>

int main() {
    int n, check;
    char name[51][51], output[51];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%s", name[i]);
    for(int j=0; j<51
    ; j++) {
        check = 1;
        for(int i=1; i<n; i++) if(name[i][j] != name[0][j]) check = 0;
        if(check) output[j] = name[0][j];
        else output[j] = '?';
    }
    printf("%s", output);
}
