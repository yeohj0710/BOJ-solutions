#include <stdio.h>
#include <string.h>

int main() {
    char sentence[505];
    while(1) {
        scanf(" %[^\n]s", sentence);
        if(!strcmp(sentence, "END")) break;
        for(int i=0; i<strlen(sentence); i++) printf("%c", sentence[strlen(sentence)-i-1]);
        printf("\n");
    }
}
