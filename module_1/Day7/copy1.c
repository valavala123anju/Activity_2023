#include <stdio.h>
#define BUFFER_SIZE 4096
int main() {
    FILE *sfile, *dfile;
    char s[100],d[100];
    char buffer[BUFFER_SIZE];
    size_t bytesRead;
    printf("Enter the path of the source file: ");
    scanf("%s", s);
    printf("Enter the path of the destination file: ");
    scanf("%s",d);
    sfile = fopen(s, "rb");
    if (sfile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    dfile = fopen(d, "wb");
    if (dfile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sfile);
        return 1;
    }
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sfile)) > 0) {
        fwrite(buffer, 1, bytesRead,dfile);
    }
    printf("File copied\n");
    fclose(sfile);
    fclose(dfile);
    return 0;
}