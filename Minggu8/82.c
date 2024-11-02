#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseStringClean(const char *source, char *dest) {
    int length = strlen(source);
    int i, j = 0;

    for(i = length - 1; i >= 0; i--) {
        if(!isspace(source[i])) {
            dest[j++] = tolower(source[i]); 
        }
    }
    dest[j] = '\0';
}

void cleanString(const char *source, char *dest) {
    int i, j = 0;
    for(i = 0; i < strlen(source); i++) {
        if(!isspace(source[i])) {
            dest[j++] = tolower(source[i]);
        }
    }
    dest[j] = '\0';
}

int main() {
    char text[100];
    char rev[100];
    char cleanedText[100];
    char cleanedRev[100];

    printf("INPUT KALIMAT : ");
    
    if(fgets(text, sizeof(text), stdin) != NULL) {
        size_t len = strlen(text);
        if(len > 0 && text[len-1] == '\n') {
            text[len-1] = '\0';
        }

        cleanString(text, cleanedText);

        reverseStringClean(cleanedText, cleanedRev);

    
        if(strcmp(cleanedText, cleanedRev) == 0) {
            printf("PALINDROM\n");
        } else {
            printf("BUKAN PALINDROM\n");
        }
    } else {
        printf("Gagal membaca input.\n");
    }

    return 0;
}
