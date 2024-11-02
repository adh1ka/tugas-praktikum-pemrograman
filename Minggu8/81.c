#include <stdio.h>
#include <string.h>

void strsisip(char source[], char insert[], int pos){
    char temp[100];
    if (pos > strlen(source)) {
        pos = strlen(source);
    }
    strncpy(temp, source, pos);
    temp[pos] = '\0';

    strcat(temp, insert);
    strcat(temp, source + pos);
    strcpy(source, temp);
}

int main() {
    static char kata[100] = "salah orang";
    strsisip(kata, "se", 6);
    printf(" %s\n", kata);

    return 0;
}
